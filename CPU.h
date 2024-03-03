#ifndef CPU_H
#define CPU_H
#include <iostream>
#include <random>

#include "CPUCardGenerator.h"
#include "CPUDifficulty.h"

class CPU : public CPUCardGenerator {
 public:
  void printCardInfo();
};

#endif