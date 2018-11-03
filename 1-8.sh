#!/bin/bash
echo "Процессов пользователя:"
whoami
t=whoami
ps -U user -u  user u | wc -c
echo "Процессов пользователя root:"
ps -U root -u root u | wc -c


