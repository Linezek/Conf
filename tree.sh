#!/bin/sh
## tree.sh for sdq in /home/galpin_a/SHL_2016_shell
##
## Made by Antoine Galpin
## Login   <galpin_a@epitech.net>
##
## Started on  Fri Dec 30 17:31:51 2016 Antoine Galpin
## Last update Mon Jan  2 18:43:29 2017 Antoine Galpin
##

PATH_PRINT=${1%/}
MY_PATH=$1
ERROR=1
SUCCESS=0

if [ ! $MY_PATH ];then
    echo "USAGE: ./tree DirName"
    exit $ERROR
fi

isntdir () {
    local ITEM="$1"
    if [ -d "$ITEM" ];then
        return 1
    else
        return 0
    fi
}

if isntdir $MY_PATH;then
    echo "ERROR: $MY_PATH is not a directory"
else
    #METTRE LE TREE ICI
    echo "${PATH_PRINT#*/}"
    find $MY_PATH -type d -name [^\.]\* | sed -e 's;[^/]*/; | /;g;s;/ ;   ;g;s; /$;;;s; /;--> ;' | sed -e 's; |;|;'
fi
