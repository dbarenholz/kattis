#! /bin/bash

set -euo pipefail

# cd to scripts directory before running
cd "$(dirname "$0")" || exit 1

# Yeet current table to smithereens - it is easier to rebuild than modify
LINE_MATCH="$(grep -n "## Solved problems" "../README.md" | cut -d: -f1)"
LINE_NO="$(("$LINE_MATCH" + 4))"
sed -in "$LINE_NO,$ d" "../README.md"

unset LINE_MATCH
unset LINE_NO

# Grab list of files, screw using -exec for this kind of logic
# TODO: This may change once I use different languages
F=$(find ../src/ -type f | grep -v "build" | sort)

# Loop through the files
for f in $F; do
  # Extract out the problem (P) and file extension (E)
  TMP="$(basename "$f")"
  P="$(echo "$TMP" | cut -d. -f1)"
  E="$(echo "$TMP" | cut -d. -f2)"
  unset TMP

  # If we have an entry
  CURRENT="$(grep -n "$P" "../README.md")"
  if [[ $CURRENT != "" ]]; then
    # Append other language variant by replacing on the desired line
    LINE_NO=$(echo "$CURRENT" | cut -d: -f1)
    unset CURRENT

    REPLACEMENT=", [$E](https://github.com/dbarenholz/kattis/blob/main/src/$P/$P.$E) |"
    
    # this sed finds ' |' at the end of line $LINE_NO, 
    # and replaces it with $REPLACEMENT
    sed -i "$LINE_NO s+ |$+$REPLACEMENT+g" "../README.md"

    unset LINE_NO
    unset REPLACEMENT
  else
    # No entry: add new one
    NEW_ENTRY="| [$P](https://open.kattis.com/problems/$P) | [$E](https://github.com/dbarenholz/kattis/blob/main/src/$P/$P.$E) |"
    echo "$NEW_ENTRY" >> "../README.md"

    unset NEW_ENTRY
  fi
done

unset F
unset f

# Remove file that gets created?
rm "../README.mdn"
