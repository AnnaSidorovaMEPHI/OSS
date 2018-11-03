#!/bin/bash
ls -l  ~ | grep '.txt$'
cat ~/*txt > /tmp/1
cat /tmp/1 | wc -c
cat /tmp/1 | wc -l
rm /tmp/1
