# choreo-msg

Message definitions for the Choreo framework.


## Requirements

This project assumes that you'll be using the [choreo-msg](https://github.com/RobotStudio/choreo-msg) proto library.


## Generating

For generating, use the provided `Makefile` and override options as needed.

CPP Example:

    make LANGUAGE=cpp all

Go Example:

    make GRPCPLUGIN=$GOPATH/bin/protoc-gen-go all
