#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Playdoh.h"
using namespace std;

void Playdoh::setCol(const char* src){
    if (colour != nullptr)
      delete [] colour;
    int len = strlen(src);
    colour = new char[len+1];
    strncpy(colour, src, len);
    colour[len] = '\0'; 
}

Playdoh::Playdoh() : Compound() { 
  colour = nullptr; 
}
Playdoh::Playdoh(const char *col, int w, const char *name) : Compound(w, name){
  if (col != nullptr){
    colour = nullptr;
    setCol(col);
  } 
  else 
    *this = Playdoh();
}
Playdoh::~Playdoh(){ delete [] colour; } 

Playdoh::Playdoh(const Playdoh& src) : Compound(src){ // Notice this part
  cout << "PCC" << endl;
  colour = nullptr;
  *this = src;
}
Playdoh& Playdoh::operator=(const Playdoh& src){
  cout << "PCA" << endl;
  (Compound&)*this = src; // Notice this part 2
  setCol(src.colour);  
  return *this;
}
void Playdoh::display() const{
  cout << "PLAY";
  Compound::display();
  cout << " " << colour << endl;
}
