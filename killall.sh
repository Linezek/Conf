#!/bin/sh
## tree.sh for sdq in /home/galpin_a/SHL_2016_shell
##
## Made by Antoine Galpin
## Login   <galpin_a@epitech.net>
##
## Started on  Fri Dec 30 17:31:51 2016 Antoine Galpin
## Last update Tue Jan  3 11:01:13 2017 Antoine Galpin
##

VALUE=""
KILLALLPID= ps -eo pid

unknown() {
    echo "USAGE: ./killall option" >&2
    echo "option: -user user1 ... : Kill all processes for user1, ..." >&2
    echo "        -pid pid1 ... : Kill a process with pid pid1, ..." >&2
    echo "        -prog prog1 ... : Kill all processes whose program's name is prog1, ..." >&2
    echo "        -all : Kill all processes" >&2
    echo  >&2
    exit 1
}

if [ ! $1 ];then
    unknown
fi

for arg in "$@";do
    case $arg in
        "-pid") VALUE="pid";;
        "-user") VALUE="user";;
        "-prog") VALUE="prog";;
        "-all") VALUE="all";;
    esac
done

if [ $VALUE = "pid" ];then
  kill $2
fi

if [ $VALUE = "user" ];then
  echo "user1"
fi

if [ $VALUE = "prog" ];then
  echo "prog1"
fi

if [ $VALUE = "all" ];then
  i=1
  while [ KILLALLPID[$i] == '\n'  ];do
    echo KILLALLPID[$i]
    echo
    i=$(($i + 1))
  done
fi
