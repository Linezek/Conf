/*
*
*
*
*
*/

#include <iostream>
#include <string>
#include "Skat.hh"

Skat::Skat(std::string const& name = "Bob", int stimPaks = 15)
{
  this->_name = name;
  this->_stimPaks = stimPaks;
}

int &Skat::stimPaks() { return this->_stimPaks; }

const std::string &Skat::name() { return this->_name; }

void Skat::shareStimPaks(int number, int& stock)
{
  stock -= number;
  this->_stimPaks = stock;
    if (stock > 15)
      std::cout << "Don’t be greedy" << std::endl;
    else {
      std::cout << "Keep the change." << std::endl;
    }
}

void Skat::addStimPaks(unsigned int number)
{
  if (number == 0)
    std::cout << "Hey boya, did you forget something ?" << std::endl;
  else
    this->_stimPaks += number;
}

void Skat::useStimPaks()
{
  this->_stimPaks -= 1;
  if (this->stimPaks > 0)
    std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
  else
    std::cout << "Mediiiiiic" << std::endl;
}

void Skat::status()
{
  std::cout << "Soldier " << this->_name <<  "reporting " << this->_stimPaks << "stimpaks remaining sir !" << std::endl;
}

int main()
{
 Skat s("Junior", 5);
 std::cout << "Soldier " << s.name() << std::endl;

 s.status();

 s.useStimPaks();

 return 0;
 }
