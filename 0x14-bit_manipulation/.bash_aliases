#!/bin/bash

alias push='git add . && read -p "Please enter your commit message: " message &&  git commit -m "$message" && git push'
