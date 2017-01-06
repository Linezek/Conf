#!/bin/sh
## tree.sh for sdq in /home/galpin_a/SHL_2016_shell
##
## Made by Antoine Galpin
## Login   <galpin_a@epitech.net>
##
## Started on  Fri Dec 30 17:31:51 2016 Antoine Galpin
## Last update Tue Jan  3 11:46:31 2017 Antoine Galpin
##

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
