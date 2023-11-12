#!/bin/bash
git add .
echo "Enter Your Commit Message:"
read commit_msg
git commit -m "${commit_msg}"
echo "Message Read Sucessfully"
git push
