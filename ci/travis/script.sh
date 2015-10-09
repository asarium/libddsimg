#!/usr/bin/env sh

set -e

cmake --build travis-build --target run_tests

if [ "$TRAVIS_OS_NAME" = "linux" ]; then
    cmake --build travis-build --target run_tests
elif [ "$TRAVIS_OS_NAME" = "osx" ]; then
    cmake --build travis-build --target run_tests --config $CONFIGURATION | xcpretty -c
fi
