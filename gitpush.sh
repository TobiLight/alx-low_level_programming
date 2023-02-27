#!/bin/bash
echo "Please, enter your git commit message"
read commit_message
alias gitp="git add .; git commit -m $commit_message; git push"
