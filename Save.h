#ifndef SAVE_H
#define SAVE_H

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class Save {
 private:
  int savedLevel = 0;
  string savedName = "";
  int saveSlot = 0;

 public:
  Save();
  void setLevel(int level);
  int returnLevel();
  void setName(string name);
  string returnName();
  int saveData(int level, string name);
  int chooseSave();
};

#endif