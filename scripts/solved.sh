#!/bin/bash

set -euo pipefail

# cd to scripts directory before running
cd "$(dirname "$0")" || exit 1


# Ask for file; extract filename and extension
read -rp "Problem: " PROBLEM
P="$(echo "$PROBLEM" | cut -d. -f1)"
E="$(echo "$PROBLEM" | cut -d. -f2)"

# Language specific starting steps
case "$E" in
  "java")
    echo "[pre] Java file: replace 'working' name with '$P'"
    sed -i "s/working/$P/g" "../working/working.java"
    ;;
  *)
    ;;
esac


# Language-agnostic steps (always execute)
echo "-> Copy working.$E to $P.$E"
cp "../working/working.$E" "../src/$P/$P.$E"

echo "-> Update README table (takes a few seconds)"
./updateTable.sh

echo "-> Add files to git"
git add "../src/$P/$P.$E"
git add "../README.md"

echo "-> Write git commit: 'Add $P.$E'"
git commit -S -m "Add $P.$E"

echo "-> Setup template for next problem"
cp "../template/template.$E" "../working/working.$E"

# Language specific ending steps
case "$E" in
  "java")
    echo "[post] Java file: replace 'template' name with 'working'"
    sed -i "s/template/working/g" "../working/working.java"
    ;;
  *)
    ;;
esac

echo "Done!"

unset PROBLEM
unset P
unset E
