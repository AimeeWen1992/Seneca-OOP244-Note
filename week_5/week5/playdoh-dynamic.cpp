// playdoh-dynamic.cpp
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "playdoh-dynamic.h"
using namespace std;

//#define constrdestr

playdoh::playdoh() {
#ifdef constrdestr  
  cout << "In constr" << endl;
#endif
  weight = 0;
  colour = '\0';
  type = nullptr;
}

playdoh::~playdoh() {
#ifdef constrdestr
  cout << "In destr " << colour << endl;
#endif
  delete [] type;
  type = nullptr;
}

playdoh::playdoh(char c, int w, const char* t) {
  *this = playdoh();
  setColour(c);
  setWeight(w);
  setType(t);
}

void playdoh::setColour(char colour){
  this->colour = colour;
}

void playdoh::setWeight(int w){
  if (w < 0) {
    cout << "Playdoh can't have negative weight!!!" <<endl;
    weight = 0;
  }
  else
    weight = w;
}

void playdoh::setType(const char* t) {
  if (t != nullptr) {
    // check if we have allocated memory
    int len = strlen(t);
    if (type != nullptr) 
      delete[] type;

    type = new char[len + 1];
    strcpy(type, t);
  }
}

char playdoh::getColour() const {
  return colour;
}

int playdoh::getWeight() const {
  return weight;
}

const char* playdoh::getType() const {
  return type;
}

void playdoh::display() const{

  if (weight == 0)
    cout << "This is an empty jar of playdoh" << endl;
  else
    cout << "Playdoh, colour: " << colour << " weight "
       << weight << " type: " << type << endl; 
}

// p += 5 -> p = p + 5;
playdoh& playdoh::operator+=(int w){
  weight += w; // p + 5 
  return *this; // is the assignment =
}
// ++p -> increment then assign
playdoh& playdoh::operator++(){
  weight += 1; // increment
  return *this; // assign by returning
}
// p++ -> assign then increment
playdoh playdoh::operator++(int){
  playdoh temp = *this;
  temp.type = nullptr;
  ++(*this); // ++p
  return temp;
}

// bool conversion op
playdoh::operator bool() const{
  return (weight > 0);
}

// one arg constr aka int cast operator
playdoh::playdoh(int w){
  weight = w;
  colour = 'z';
  type = new char[4];
  strcpy(type, "Dog");
}

bool sameplaydoh(playdoh& a, playdoh& b){
  if (a.weight == b.weight)
          return true;
  return false;
}

bool operator==(playdoh& a, playdoh& b){
  return sameplaydoh(a,b);
}

int main(){

  playdoh p('r', 100, "eco friendly");
  //p += 5; // has no meaning
  //++p; // prefix ++
  //p++; // postfix ++
  if (p)
    cout << "This playdoh has weight" << endl;

  playdoh p2('b', 100, "cats");

  //if (sameplaydoh(p, p2))
  if (p == p2)
          cout << "they are the same" << endl;

  cout << "End of Program" << endl;
}
