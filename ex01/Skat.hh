#ifndef _SKAT_H_
# define _SKAT_H_

#include <iostream>
#include <string>

class Skat
{
  public:
  Skat(std::string const& name, int stimPaks);
  ~Skat();

  public:
  int &stimPaks();
  const std::string& name();

  public:
  void shareStimPaks(int number, int& stock);
  void addStimPaks(unsigned int number);
  void useStimPaks();

  public:
  void status();

  private:
  std::string const& _name;
  int &_stimPaks;
};

#endif /* _SKAT_H_! */
