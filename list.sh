#!/bin/sh
## tree.sh for sdq in /home/galpin_a/SHL_2016_shell
##
## Made by Antoine Galpin
## Login   <galpin_a@epitech.net>
##
## Started on  Fri Dec 30 17:31:51 2016 Antoine Galpin
## Last update Tue Jan  3 14:56:16 2017 Antoine Galpin
##

# value list_name
add_in_list() {
  value=$1
  list_name=$2
  next=""
  while [ $next != '0' ];do
    get_list_name_value=`echo $list_name | cut -d',' -f 1`
    get_list_name=`echo $list_name | cut -d',' -f 2`
    $next= get_list_name
  done
}

# list_name
display_list() {
  list_name=$1
  next=""
  while [ list_name != '0' ]; do
    
  done
}

my_list="5,my_list2"
my_list2="12,my_list3"
my_list3="7,my_list4"
my_list4="42,0"

echo "Display list :"
display_list "$my_list"

echo "Add elem in list"
add_in_list 2 "$my_list"
add_in_list 3 "$my_list"
add_in_list 4 "$my_list"
add_in_list 5 "$my_list"

echo "Display list :"
display_list "$my_list"
