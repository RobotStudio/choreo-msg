#!/bin/bash

builds="./build"

[ "$#" -gt 0 ] || { echo "Please specify a language"; exit 1; }

PROTOC="$(which protoc)"
[ -f "$PROTOC" ] || { echo "Do you have protoc installed?"; exit 1; }

lang_opts=
#[ "$#" -gt 0 ] || lang_opts="--go_out=$builds/go"
for lang in $*; do
  lang_opts="$lang_opts --${lang}_out=$builds/$lang"
  [ -d "$builds/$lang" ] || mkdir -p "$builds/$lang"
done

find . -iname '*.proto' -type f | while read -r f; do
  p="$(dirname "$f")"
  $PROTOC $lang_opts "$f"
done

exit 0
