#!/bin/bash

src="./src"
builds="../msg"
langs=(
  "go"
  "cpp"
  "python"
  "java"
)

[ "$#" -gt 0 ] && langs=("$@")
#[ "$#" -gt 0 ] || { echo "Please specify a language"; exit 1; }

PROTOC="$(which protoc)"
[ -f "$PROTOC" ] || { echo "Do you have protoc installed?"; exit 1; }

cd "$src" || { echo "Could not cd into $src"; exit 1; }

[ -d "$builds" ] && rm -rf "$builds"
mkdir -p "${builds}"

lang_opts=
for lang in "${langs[@]}"; do
  lang_opts="$lang_opts --${lang}_out=$builds"
done

find . -iname '*.proto' -type f | while read -r f; do
  echo "$PROTOC" "$lang_opts" "$f"
  # shellcheck disable=SC2086
  "$PROTOC" $lang_opts "$f"
done

exit 0
