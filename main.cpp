#include <iostream>
using namespace std;
#include "CPU.h"
#include "CPUCardGenerator.h"
#include "CPUDifficulty.h"
#include "Player.h"
#include "PlayerCardGenerator.h"
#include "Save.h"

int main() {
  // initialise variables
  int playerLevel = 3;
  int answer = 0;
  int userInput = 0;
  int playerCounter = 0;
  int CPUCounter = 0;
  int pValue = 0;
  int playerInput = 0;
  int turns = 0;
  string name = "";
  string pElement = "";
  srand(time(NULL));

  // create classes
  Save s1;
  Player p1;
  Player p2;
  Player p3;
  CPU c1;
  cout << "How many times would you like to play: " << endl;
  cin >> turns;

  if (CPUCounter != 3 || playerCounter != 3) {
    for (int i = 0; i < turns; i++) {
      // generate player cards
      // card one
      p1.setElement();
      string playerElementOne = p1.getElement();
      p1.setValue();
      int playerValueOne = p1.getValue();
      // card two
      p2.setElement();
      string playerElementTwo = p2.getElement();
      p2.setValue();
      int playerValueTwo = p2.getValue();
      // card three
      p3.setElement();
      string playerElementThree = p3.getElement();
      p3.setValue();
      int playerValueThree = p3.getValue();

      // display cards for player
      cout << "You have been given these cards: " << endl;
      cout << "1. " << playerElementOne << " and of value " << playerValueOne
           << endl;
      cout << "2. " << playerElementTwo << " and of value " << playerValueTwo
           << endl;
      cout << "3. " << playerElementThree << " and of value "
           << playerValueThree << endl;
      cout << "Please select a card to play: " << endl;
      cin >> userInput;

      if (userInput == 1) {
        pElement = playerElementOne;
        pValue = playerValueOne;
      } else if (userInput == 2) {
        pElement = playerElementTwo;
        pValue = playerValueTwo;
      } else if (userInput == 3) {
        pElement = playerElementThree;
        pValue = playerValueThree;
      } else if (userInput < 1 || userInput > 3) {
        cout << "Please enter a valid number: " << endl;
        cin >> userInput;
      }

      // generate CPU card
      c1.setProbability(playerLevel);
      int prob = c1.getProbability();
      c1.setElement(pElement, prob);
      string cElement = c1.getElement();
      c1.setCardValue();
      int cValue = c1.getCardValue();

      // Display CPU Card
      cout << "The computer has player the card: " << endl;
      cout << cElement << " and of value " << cValue << endl;

      // determine who wins or loses
      if (cElement == "Fire" && pElement == "Water") {
        cout << "The Player has won the turn." << endl;
        playerCounter = playerCounter + 1;
      } else if (cElement == "Fire" && pElement == "Earth") {
        cout << "The Computer has won the turn." << endl;
        CPUCounter = CPUCounter + 1;
      } else if (cElement == "Fire" && pElement == "Fire") {
        if (cValue >= pValue) {
          cout << "The Computer has won the turn." << endl;
          CPUCounter = CPUCounter + 1;
        } else {
          cout << "The Player has won the turn." << endl;
          playerCounter = playerCounter + 1;
        }
      }
      if (cElement == "Water" && pElement == "Earth") {
        cout << "The Player has won the turn." << endl;
        playerCounter = playerCounter + 1;
      } else if (cElement == "Water" && pElement == "Fire") {
        cout << "The Computer has won the turn." << endl;
        CPUCounter = CPUCounter + 1;
      } else if (cElement == "Water" && pElement == "Water") {
        if (cValue >= pValue) {
          cout << "The Computer has won the turn." << endl;
          CPUCounter = CPUCounter + 1;
        } else {
          cout << "The Player has won the turn." << endl;
          playerCounter = playerCounter + 1;
        }
      }
      if (cElement == "Earth" && pElement == "Fire") {
        cout << "The Player has won the turn." << endl;
        playerCounter = playerCounter + 1;
      } else if (cElement == "Earth" && pElement == "Water") {
        cout << "The Computer has won the turn." << endl;
        CPUCounter = CPUCounter + 1;
      } else if (cElement == "Earth" && pElement == "Earth") {
        if (cValue >= pValue) {
          cout << "The Computer has won the turn." << endl;
          CPUCounter = CPUCounter + 1;
        } else {
          cout << "The Player has won the turn." << endl;
          playerCounter = playerCounter + 1;
        }
      }

      cout << "The player has won " << playerCounter << " times." << endl;
    }
  }
  cout << "Would you like to save the score? 1 = Yes, 2 = No" << endl;
  cin >> answer;
  if (answer == 1) {
    cout << "Please enter your name: ";
    cin >> name;
    s1.saveData(playerCounter, name);
    cout << "Successfully Saved." << endl;
  } else {
    return 0;
  }
  return 0;
}