#!/usr/bin/env sh

set -e

cd travis-build

if [ "$TRAVIS_OS_NAME" = "linux" ]; then
    ninja run_tests
elif [ "$TRAVIS_OS_NAME" = "osx" ]; then
    xcodebuild ARCHS=$MACOSX_ARCH ONLY_ACTIVE_ARCH=NO -configuration "$CONFIGURATION" | xcpretty -c
    ls
fi
