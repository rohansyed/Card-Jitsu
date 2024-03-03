#include "cpuCardGenerator.h"

void CPUCardGenerator::setCardValue() { CPUvalue = 1 + (rand() % 10); }

int CPUCardGenerator::getCardValue() { return CPUvalue; }

void CPUCardGenerator::printCardInfo() { cout << CPUvalue << endl; }