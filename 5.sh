#!/bin/bash
$ ps -Ao euid,ruid,comm | awk '$1!=$2{print $3}'| tr -s 'COMMAND' ' '

