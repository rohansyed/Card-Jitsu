#include "Save.h"

#include <fstream>

Save::Save() {}

void Save::setLevel(int level) { savedLevel = level; }

int Save::returnLevel() { return savedLevel; }

void Save::setName(string name) { savedName = name; }

string Save::returnName() { return savedName; }

int Save::saveData(int level,
                   string name) {  // saves and updates data in a new text file
  ofstream myfile;
  myfile.open("Card Fight Data.txt");
  myfile << "Save Slot 1: "
         << "\nPlayer Name: " << name << "\nPlayer Wins: " << level;
  myfile.close();
  return 0;
}

int Save::chooseSave() {
  int slot_num;
  cout << "Please Choose from Available Save Slots: (1) ";
  cin >> slot_num;

  if (slot_num == 1) {
    cout << "Loading Slot Save 1... \n";
    return savedLevel;
  } else {
    cout << "Invalid Choice";
    return 0;
  }
}