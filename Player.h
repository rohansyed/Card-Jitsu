#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <random>

#include "PlayerCardGenerator.h"
using namespace std;

class Player : public PlayerCardGenerator {
 public:
  void printCardVariables();
};

#endif