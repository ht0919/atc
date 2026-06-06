#!/bin/bash
if [[ "$(uname)" == "Darwin" ]]; then
    cp session.json /Users/ht0919/Library/Preferences/atcoder-cli-nodejs
elif [[ "$(uname)" == "Linux" ]]; then
    cp session.json ~/.config/atcoder-cli-nodejs/
else
    echo "Your platform ($(uname)) is not supportted."
fi