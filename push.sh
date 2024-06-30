#!/bin/bash
S1="abc"
S2="360"
S3=$S1$S2
if [[ -d ./$S3 ]]; then
    find . -executable -type f -not -path '*.git*' -delete
    git add -A
    git commit -m "Add ${S3}"
    git push
else
    echo "file not found."
fi
