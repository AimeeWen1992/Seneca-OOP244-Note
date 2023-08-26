// Main.cpp

#include <iostream>
#include "Crystal.h"
#include "Gem.h"
using namespace std;
using namespace gem_kingdom;

//#define ARR
#define SHOW

void show(const Crystal* c){
  c->display(cout);
}

int main() {

#ifndef ARR
  cout << "Creating a Crystal" << endl;

  iCrystal* c = new Crystal();
  c->display(cout);
  c->cut();
  cout << "\nCutting a Gem" << endl;
  c->display(cout);

  cout << "Delete c" << endl;
  delete c;
  
  cout << "\nCreating a Gem" << endl;
  c = new Gem("Ruby", 1000, 50);
  c->display(cout);
  
  cout << "\nCutting a Gem" << endl;
  c->cut();
  c->display(cout);
  
  cout << "Delete c" << endl;
  delete c;
#endif

#ifdef ARR

  cout << "\nArray of iCrystal ptr" << endl;
  iCrystal* np[3];
  np[0] = new Crystal();
  np[1] = new Gem("Ruby", 1000, 50);
  np[2] = new Gem("Emerald", 2000, 50);

  for (int i = 0; i < 3; i++){
    np[i]->display(std::cout);
  }
#endif

#ifdef SHOW
  cout << "\nThe Show Function" << endl;
  Crystal* gg = new Gem("Sapphire", 3000, 50);
  show(gg);
#endif
}
