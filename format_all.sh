#!/bin/bash

function check_command {
  local COMMAND="$1"
  if ! command -v "$COMMAND" &> /dev/null
  then
      echo "$COMMAND not found. Please install it."
      exit 1
  fi
}

check_command buildifier
check_command clang-format

find . -name '*.cc' -or -name '*.h' | grep -v '/.git/' | xargs clang-format -style Google -i
find . -name 'WORKSPACE' -or -name 'BUILD' | grep -v '/.git/' | xargs buildifier
