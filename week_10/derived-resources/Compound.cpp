#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Compound.h"
using namespace std;

// Helper Function
void Compound::setName(const char* src){
    if (name != nullptr)
      delete [] name;
    int len = strlen(src);
    name = new char[len+1];
    strncpy(name, src, len);
    name[len] = '\0'; 
}
Compound::Compound(){ 
  weight = 0; name = nullptr;
}
Compound::Compound(int w, const char* n){
  if (n != nullptr) {
    name = nullptr;
    setName(n);
    weight = w; 
  }
  else
    *this = Compound(); 
}; 
Compound::~Compound(){ delete [] name; }

Compound::Compound(const Compound& src){
  cout << "CCC" << endl;
  name = nullptr; 
  *this = src;
}
Compound& Compound::operator=(const Compound& src){
  cout << "CCA" << endl;
  if (this != &src){
    setName(src.name);
    weight = src.weight;
  }
    
  return *this;  
}

void Compound::display() const{
  cout << "COMP: " << name << " " << weight << endl;
};

