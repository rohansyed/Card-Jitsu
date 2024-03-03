#ifndef CPUDIFFICULTY_H
#define CPUDIFFICULTY_H

#include <iostream>
#include <random>
#include <string>
using namespace std;

class CPUDifficulty {
 protected:
  int probability;
  string CPUelement;

 public:
  void setProbability(int playerLevel);
  int getProbability();
  void setElement(string playerElement, int probability);
  string getElement();
  virtual void printCardInfo() = 0;
};

#endif