#include "PlayerCardGenerator.h"

void PlayerCardGenerator::setValue() { playerValue = 1 + (rand() % 10); }
int PlayerCardGenerator::getValue() { return playerValue; }

void PlayerCardGenerator::setElement() {
  string gElement = "";
  int random = 1 + (rand() % 3);
  switch (random) {
    case 1:
      gElement = "Water";
      break;
    case 2:
      gElement = "Fire";
      break;
    case 3:
      gElement = "Earth";
      break;
  }
  playerElement = gElement;
}
string PlayerCardGenerator::getElement() { return playerElement; }