#!/bin/bash

# cd to scripts directory before running
cd "$(dirname "$0")" || exit 1


# Ask for file; extract filename and extension
read -rp "Problem: " PROBLEM
P="$(echo "$PROBLEM" | cut -d. -f1)"
E="$(echo "$PROBLEM" | cut -d. -f2)"

# Language specific steps
case "$E" in
  "java")
    echo "Java file: replace 'working' name with '$P'"
    sed -i "s/working/$P/g" "../working/working.$E"
    ;;
  *)
    ;;
esac


# Language-agnostic steps (always execute)
echo "Copy working.$E to $P.$E"
cp "../working/working.$E" "../src/$P/$P.$E"

echo "Update README table"
./updateTable.sh

echo "Add to git"
git add "../src/$P/$P.$E"
git add "../README.md"

echo "Write git commit"
git commit -S -m "Add $P.$E"

echo "Setup template for next problem"
cp "../template/template.$E" "../working/working.$E"

echo "Done!"

unset PROBLEM
unset P
unset E