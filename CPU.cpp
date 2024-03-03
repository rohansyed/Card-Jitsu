#include "CPU.h"

void CPU::printCardInfo() {
  cout << "Element: " << CPUelement << endl;
  cout << "Value: " << CPUCardGenerator::getCardValue() << endl;
}