#include "CPUDifficulty.h"

void CPUDifficulty::setProbability(int playerLevel) {
  probability = 0;
  switch (playerLevel) {
    case 1:
      probability = 5;
      break;
    case 2:
      probability = 4;
      break;
    case 3:
      probability = 3;
      break;
    case 4:
      probability = 2;
      break;
    case 5:
      probability = 1;
      break;
  }
}

int CPUDifficulty::getProbability() { return probability; }

void CPUDifficulty::setElement(string playerElement, int probability) {
  int random = 1 + (rand() % 6);
  if (random <= probability) {
    if (playerElement == "Fire") {
      CPUelement = "Earth";
    } else if (playerElement == "Earth") {
      CPUelement = "Water";
    } else if (playerElement == "Water") {
      CPUelement = "Fire";
    }
  } else if (random > probability) {
    int randomTwo = 1 + (rand() % 2);
    if (playerElement == "Fire") {
      switch (randomTwo) {
        case 1:
          CPUelement = "Water";
          break;
        case 2:
          CPUelement = "Earth";
          break;
      }
    } else if (playerElement == "Water") {
      switch (randomTwo) {
        case 1:
          CPUelement = "Fire";
          break;
        case 2:
          CPUelement = "Earth";
          break;
      }
    } else if (playerElement == "Earth") {
      switch (randomTwo) {
        case 1:
          CPUelement = "Fire";
          break;
        case 2:
          CPUelement = "Water";
          break;
      }
    }
  }
}

string CPUDifficulty::getElement() { return CPUelement; }

void CPUDifficulty::printCardInfo() {
  cout << probability << endl;
  cout << CPUelement << endl;
}