#!/bin/bash

rm -R ./build/*
cd build
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 ..
