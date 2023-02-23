#!/bin/bash
read -p "Problem: " PROBLEM

echo "cp _working.cc problems/$PROBLEM.cc"
cp _working.cc problems/$PROBLEM.cc

echo "git add problems/$PROBLEM.cc"
git add "problems/$PROBLEM.cc"

echo "git commit -m 'Add $PROBLEM'"
git commit -S -m "Add $PROBLEM"

echo "cp _template.cc _working.cc"
cp _template.cc _working.cc