#!/usr/bin/env sh

set -e

if [ "$TRAVIS_OS_NAME" = "linux" ]; then
    cd travis-build
    ninja run_tests
elif [ "$TRAVIS_OS_NAME" = "osx" ]; then
    cmake --build travis-build --target run_tests --config $CONFIGURATION | xcpretty -c
fi
