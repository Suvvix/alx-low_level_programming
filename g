#!/bin/bash

# Add changes to the staging area
git add .

# Commit changes with a message provided as the first argument
git commit -m "$1"

# Push changes to the remote repository
git push

