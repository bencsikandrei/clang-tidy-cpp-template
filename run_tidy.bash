#!/bin/bash

## Test run the .clang-tidy file
CLANG_TIDY='clang-tidy'

command -v ${CLANG_TIDY} >/dev/null 2>&1 || { echo >&2 "I require ${CLANG_TIDY} but it's not installed.  Aborting."; exit 1; }

${CLANG_TIDY} Test.hpp  -- -std=c++11

