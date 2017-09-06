# choreo-msg

Message definitions for the Choreo framework.


## Requirements

This project only has ProtoBuf requirements.


## Generating

If you intend to use this project with [choreo-svc](https://github.com/RobotStudio/choreo-svc) then you should generate
using that project instead.

For generating, use the provided `Makefile` and override options as needed.

CPP Example:

    make LANGUAGE=cpp all

Go Example:

    make GRPCPLUGIN=$GOPATH/bin/protoc-gen-go all
