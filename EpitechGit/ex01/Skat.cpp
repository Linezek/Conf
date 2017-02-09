//
// Skat.cpp for dsq in /home/galpin_a/CPP/ex00
//
// Made by Antoine Galpin
// Login   <galpin_a@epitech.net>
//
// Started on  Wed Jan 11 01:43:24 2017 Antoine Galpin
// Last update Tue Jan 10 19:27:32 2017 Antoine Galpin
//

#include "Skat.h"

Skat::Skat(std::string const& name, int stimPacks): _name(name), _stimPacks(stimPacks) {
}

Skat::~Skat() {}

int& Skat::stimPaks() {return _stimPacks;}

std::string const& Skat::name() {return _name;}

void Skat::shareStimPaks(int number, int& stock) {
  if (number <= _stimPacks)
    {
      stock += number;
      this->_stimPacks -= number;
      std::cout << "Keep the change." << std::endl;
    }
  else
    {
      std::cout << "Don’t be greedy" << std::endl;
    }
}
void Skat::addStimPaks(unsigned int number) {
  if (!this->_stimPacks) {
    std::cout << "Hey boya, did you forget something ?" << std::endl;
  }
  this->_stimPacks += number;
}

void Skat::useStimPaks() {
  if (this->_stimPacks > 0) {
    this->_stimPacks--;
    std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
  }
  else {
    std::cout << "Mediiiiiic" << std::endl;
  }
}

void Skat::status() const {
  std::cout << "Soldier " << this->_name << " reporting " << this->_stimPacks << " stimpaks remaining sir !" << std::endl;
}

int main()
{
  Skat s("Junior", 5);
  std::cout << "Soldier " << s.name() << std::endl;
  s.status();
  s.useStimPaks();
  s.status();
  return 0;
 }
