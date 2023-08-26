// playdoh.cpp

#include <iostream>
#include "playdoh.h"
using namespace std;

//#define output 

// compound's member functions
compound::compound(){
  #ifdef output 
  cout << "compound default" << endl;
  #endif
  weight = 0;
}

compound::compound(int w){
  #ifdef output 
  cout << "compound 1arg" << endl;
  #endif
  setWeight(w); 
}

compound::~compound(){
  #ifdef output 
  cout << "In compound destr" << endl;
  #endif
}

void compound::setWeight(int w){
  weight = w;
}

int compound::getWeight() const{
  return weight;
}

void compound::display() const{
  //displayProt();
  cout << "Compound, weight: " << weight << endl;
}

void compound::displayProt() const{
  cout << "This is a protected compound" << endl;
}

// playdoh's member functions
playdoh::playdoh(){
  #ifdef output 
  cout << "playdoh default" << endl;
  #endif
  colour = 'z';
}

playdoh::playdoh(char c, int w){
//playdoh::playdoh(char c, int w) : compound(w){
  #ifdef output 
  cout << "playdoh 2 arg" << endl;
  #endif 
  setWeight(w); 
  setColour(c);
}

playdoh::~playdoh(){
  #ifdef output 
  cout << "In playdoh destr" << endl;
  #endif
}

void playdoh::setColour(char c){
  colour = c;
}

char playdoh::getColour() const{
  return colour;
}

void playdoh::display() const{
  //displayProt();
  //cout << "Attempting compound display in playdoh" << endl;
  //compound::display();
  cout << "Playdoh, weight: " << getWeight() 
       << " colour: " << colour << endl;
}
  
// main function

int main(){

  compound c(15);
  c.display(); // compound display
  cout << "********************" << endl;
  playdoh p('r', 25);
  p.display(); // playdoh display
  cout << "********************" << endl;
  p.setWeight(55); // inherited function
  p.setColour('b'); // non inherited function
  p.display();
  cout << "********************" << endl;
  //c.displayProt(); // protected  ---------------> 不能從外部直接獲取(like here),要進入public去獲取base的protected,但可以從derived裡的function裡去獲取base的protected
  //p.displayProt(); // protected
  return 0;
}



