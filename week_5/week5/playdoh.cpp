// playdoh.cpp
//

#include <iostream>
#include "playdoh.h"
using namespace std;

//#define debug

//Default constructor
playdoh::playdoh() {
  #ifdef debug
  cout << "Inside playdoh default constr" << endl;
  #endif
  colour = 'x';
  weight = 0;
}

// Destructor
playdoh::~playdoh() {
  #ifdef debug
  cout << "Inside the destructor: " << colour << endl;
  #endif
}

// Overloaded constructor
playdoh::playdoh(char c, int w) {
  #ifdef debug
  cout << "Inside overloaded constr" << endl;
  #endif 
  setColour(c);
  setWeight(w);
}

void playdoh::setColour(char c) {
  colour = c;
}

void playdoh::setWeight(int w) {
  if (w < 0) {
    cout << "Playdoh can't have negative weight!!!" << endl;
    weight = 0;
  }
  else
    weight = w;
}

char playdoh::getColour() const {
  return colour;
}

int playdoh::getWeight() const {
  return weight;
}

// No arg display
void playdoh::display() const {

  if (weight == 0)
    cout << "This is an empty jar of playdoh" << endl;
  else
    cout << "Playdoh, colour: " << colour << " weight "
    << weight << endl;
}

// Binary Operator +=
// lhs = playdoh, rhs = int, between is +=
// pl += 5
playdoh& playdoh::operator+=(int w) {

  weight += w;
  return *this;
}

// Unary Operator ++ pre fix
playdoh& playdoh::operator++() {

  weight += 1;
  return *this;
}

// Unary Operator ++ post fix
playdoh playdoh::operator++(int) {

  playdoh temp = *this; // Save a copy of the original 
  ++(*this); // Notice we're using the prefix op overload here
  return temp; // Notice we're returning the original here
}

// bool operator conversion
playdoh::operator bool() const {
  return (weight > 0);
}

playdoh::operator int() const {
  return weight;
}

// Cast operator, note it looks like a single arg constructor
playdoh::playdoh(int w) {
  setWeight(w);
  colour = 'y';
}

bool samePlaydoh(const playdoh& p1, const playdoh& p2) {

  if (p1.weight == p2.weight && p1.colour == p2.colour)
    return true;
  else
    return false;

  /*if (p1.getWeight() == p2.getWeight() 
      && p1.getColour() == p2.getColour())
    return true;
  else
    return false;*/
}

// p1 == p2 , lhs is a playdoh, rhs is a playdoh with == between
bool operator==(const playdoh& p1, const playdoh& p2) {
  bool state = false;
  
  if (p1.getWeight() == p2.getWeight() && p1.getColour() == p2.getColour())
    state = true;
  else
    state = false;

  return state;
}

#define ex1
#define ex2
#define ex3
#define ex4

int main() {

#ifdef ex1
  playdoh p1('r', 100);

  p1.display();
  p1 += 100;
  //p1.plusweight(100);
  p1.display();
#endif

#ifdef ex2
  cout << "Prefix" << endl;
  ++p1;
  p1.display();

  cout << "Post fix: Original vs updated" << endl;
  playdoh backup = p1++;
  cout << "Back up" << endl;
  backup.display();
  cout << "Original" << endl;
  p1.display();
#endif

#ifdef ex3
  // Playdoh converted to a bool
  if (p1) {
    cout << "Our playdoh has some weight to it" << endl;
  }

  // Playdoh converted to an int
  int playdoh_int = p1;
  cout << "Playdoh weight: " << playdoh_int << endl;

  playdoh p2;
  p2 = (playdoh) 12345;
  p2.display();

  playdoh p3;
  p3 = 12333;
  p3.display();
#endif
  
#ifdef ex4
  playdoh p4('b',20);
  playdoh p5('b',20);

  if (samePlaydoh(p4, p5)){
    cout << "p4 and p5 are the same" << endl;
  }

  p4.display();

  /*if (p4 == p5)
    cout << "p4 and p5 are the same via ==" << endl;*/
#endif
}
