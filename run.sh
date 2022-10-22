#!/bin/bash

APPNAME=cliutil

echo "Compiling ..."
gcc main.c -o $APPNAME && \
echo "Done!" && \
echo "Running cli app ..." && \
./$APPNAME $@
