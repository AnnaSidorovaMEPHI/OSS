#!/bin/bash
grep 000000 ~/scripts/bash.txt > /tmp/zeros
grep -v 000000 ~/scripts/bash.txt > /tmp/nozeros
cat /tmp/zeros | head -n10
cat /tmp/zeros | tail -n10
cat /tmp/nozeros | head -n10
cat /tmp/nozeros | tail -n10


 
