// playdoh.cpp
//

#include <iostream>
#include "playdoh.h"
using namespace std;

//Default constructor
playdoh::playdoh(){
  //cout << "Inside playdoh default constr" << endl;
  colour = 'x';
  weight = 0;
}

// Destructor
playdoh::~playdoh(){
  //cout << "Inside the destructor: " << colour << endl;
}

// Overloaded constructor
playdoh::playdoh(char c, int w){

  //cout << "Inside overloaded constr" << endl;
  setColour(c);
  setWeight(w);
}

void playdoh::setColour(char c){
  colour = c;
}

void playdoh::setWeight(int w){
  if (w < 0) {
    cout << "Playdoh can't have negative weight!!!" <<endl;
    weight = 0;
  }
  else
    weight = w;
}

char playdoh::getColour() const{
  return colour; 
}

int playdoh::getWeight() const{
  return weight; 
}

// No arg display
void playdoh::display() const{

  if (weight == 0)
    cout << "This is an empty jar of playdoh" << endl;
  else
    cout << "Playdoh, colour: " << colour << " weight "
       << weight << endl; 
}

// Binary Operator +=
playdoh& playdoh::operator+=(int w){

  weight += w; 
  return *this; 
}

// Unary Operator ++ pre fix
playdoh& playdoh::operator++(){

  weight += 1;
  return *this;
}

// Unary Operator ++ post fix
playdoh playdoh::operator++(int){

  playdoh temp = *this; // Save a copy of the original 
  ++(*this); // Notice we're using the prefix op overload here
  return temp; // Notice we're returning the original here
}

// bool operator conversion
playdoh::operator bool() const{
  return (weight > 0);
}

playdoh::operator int() const{
  return weight;
}

// Cast operator, note it looks like a single arg constructor
playdoh::playdoh(int w){
  setWeight(w);
  colour = 'y';
}

bool samePlaydoh(const playdoh& p1, const playdoh& p2){

  if (p1.weight == p2.weight && p1.colour == p2.colour)
    return true;
  else
    return false;

  //if (p1.getWeight() == p2.getWeight() 
  //    && p1.getColour() == p2.getColour())
  //  return true;
  //else
  //  return false;
}

bool operator==(const playdoh& p1, const playdoh& p2){
  if (p1.getWeight() == p2.getWeight() &&
      p1.getColour() == p2.getColour())
    return true;
  else
    return false;
}
