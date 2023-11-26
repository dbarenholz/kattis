#!/bin/bash

set -euxo pipefail

# cd to scripts directory before running
cd "$(dirname "$0")" || exit 1

# Ask for file; extract filename and extension
read -rp "Problem: " PROBLEM
P="$(echo "$PROBLEM" | cut -d. -f1)"
E="$(echo "$PROBLEM" | cut -d. -f2)"

# Language specific starting steps
case "$E" in
  "java")
    sed -i "s/working/$P/g" "../working/working.java"
    ;;
  *)
    ;;
esac

# Language-agnostic steps (always execute)
cp "../working/working.$E" "../src/$P/$P.$E"
./updateTable.sh  
git add "../src/$P/$P.$E"
git add "../README.md"
git commit -S -m "Add $P.$E"
cp "../template/template.$E" "../working/working.$E"

# Language specific ending steps
case "$E" in
  "java")
    sed -i "s/template/working/g" "../working/working.java"
    ;;
  *)
    ;;
esac

echo "Done!"

unset PROBLEM
unset P
unset E