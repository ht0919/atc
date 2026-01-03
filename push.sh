#!/bin/bash
S1="abc"
S2="439"
S3=$S1$S2
if [[ -d ./$S3 ]]; then
    if [[ "$(uname)" == "Darwin" ]]; then
        find . -perm +0111 -type f -not -path '*.git*' -delete
    elif [[ "$(uname)" == "Linux" ]]; then
        find . -executable -type f -not -path '*.git*' -delete
    else
        echo "Your platform ($(uname)) is not supportted."
    fi
    git add -A
    git commit -m "Add ${S3}"
    git push
else
    echo "file not found."
fi
