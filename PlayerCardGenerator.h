#ifndef PLAYERCARDGENERATOR_H
#define PLAYERCARDGENERATOR_H

#include <iostream>
#include <random>
using namespace std;

class PlayerCardGenerator {
 protected:
  int playerValue;
  string playerElement;

 public:
  void setValue();
  void setElement();
  int getValue();
  string getElement();
};

#endif