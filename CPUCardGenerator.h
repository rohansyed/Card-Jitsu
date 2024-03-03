#ifndef CPU_CARD_GENERATOR_H
#define CPU_CARD_GENERATOR_H

#include <iostream>
#include <random>
#include <string>

#include "CPUDifficulty.h"

using namespace std;

class CPUCardGenerator : public CPUDifficulty {
 private:
  int CPUvalue;

 public:
  void setCardValue();
  int getCardValue();
  void printCardInfo();
};

#endif