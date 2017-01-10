/*
*
*
* Antoine.galpin@epitech.eu
*
*
*/

#include <string>
#include <iostream>
#include "Warpsystem.hh"
#include "Federation.hh"

WarpSystem::QuantumReactor::QuantumReactor()
{
  this->_stability = true;
}

WarpSystem::QuantumReactor::~QuantumReactor() {}

bool	WarpSystem::QuantumReactor::isStable() { return (this->_stability); }

void	WarpSystem::QuantumReactor::setStability(bool stability) { this->_stability = stability; }

WarpSystem::Core::Core(QuantumReactor *core) { this->_coreReactor = core;}

WarpSystem::Core::~Core() { }

WarpSystem::QuantumReactor *WarpSystem::Core::checkReactor()
{
  return this->_coreReactor;
}

int main(void)
{
  Federation::Starfleet::Ship UssKreog(289, 132, "Kreog", 6);
  Federation::Ship Independant(150, 230, "Greok");
  WarpSystem::QuantumReactor QR;
  WarpSystem::QuantumReactor QR2;
  WarpSystem::Core core(&QR);
  WarpSystem::Core core2(&QR2);


  UssKreog.setupCore(&core);
  UssKreog.checkCore();
  Independant.setupCore(&core2);
  Independant.checkCore();

  QR.setStability(false);
  QR2.setStability(false);
  UssKreog.checkCore();
  //Independant.checkCore();
  return 0;
}
