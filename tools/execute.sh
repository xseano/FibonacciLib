#!/bin/sh

SRC_FILE=${1:-$((-1))}
BUILD_DIR=${1:-$((-1))}
BUILD_NAME=${1:-$((-1))}

OPERATION=${1:-$((-1))}

if [ "$OPERATION" -eq "-1" ];
 then
    read -p "Do you want to build or run?: " OPERATION
    OPERATION=${OPERATION}
fi

if [ "$SRC_FILE" -eq "-1" ];
 then
    read -p "Source File: " SRC_FILE
    SRC_FILE=${SRC_FILE}
fi

if [ "$BUILD_DIR" -eq "-1" ];
 then
    read -p "Build Directory: " BUILD_DIR
    APP_NAME=${BUILD_DIR}
fi

if [ "$BUILD_NAME" -eq "-1" ];
 then
    read -p "Build Name: " BUILD_NAME
    APP_NAME=${BUILD_NAME}
fi

if [ "$OPERATION" = "build" ];
 then
    echo "Building $SRC_FILE into $BUILD_NAME now..."
    clang++ -g -Wall $SRC_FILE -o $BUILD_DIR/$BUILD_NAME
elif [ "$OPERATION" = "run" ];
 then
    echo "Running $SRC_FILE now..."
    clang++ -g -Wall $SRC_FILE -o $BUILD_DIR/$BUILD_NAME && $BUILD_DIR/$BUILD_NAME
else
    echo "No valid option chosen, running $SRC_FILE now..."
    clang++ -g -Wall $SRC_FILE -o $BUILD_DIR/$BUILD_NAME && $BUILD_DIR/$BUILD_NAME
fi