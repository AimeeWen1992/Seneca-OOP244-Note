// playdoh.cpp
//

#include <iostream>
#include "playdoh-io.h"

//Default constructor
playdoh::playdoh(){
  colour = 'x';
  weight = 0;
}

// Overloaded constructor
playdoh::playdoh(char c, int w){
  setColour(c);
  setWeight(w);
}

void playdoh::setColour(char c){
  colour = c;
}

void playdoh::setWeight(int w){
    weight = w;
}

char playdoh::getColour() const{
  return colour; 
}

int playdoh::getWeight() const{
  return weight; 
}

// Updated display function
void playdoh::display(std::ostream& os) const{

    os << "Playdoh, colour: " << colour << 
       " weight " << weight << std::endl; 
}

// New read function
void playdoh::read(std::istream& is) {

    char col;
    int wei;

    std::cout << "Enter the colour of the playdoh" << std::endl;
    is >> col;
    std::cout << "Enter the weight of the playdoh" << std::endl;
    is >> wei;

    playdoh temp(col, wei);
    if (temp.weight != 0) // If valid playdoh set as it the current obj
      *this = temp; 
    else
      *this = playdoh(); // Else set it as an empty playdoh

}

// << op overload
std::ostream& operator<<(std::ostream& os, const playdoh& p){

  p.display(os); 
  return os;
}

// >> op overload
std::istream& operator>>(std::istream& is, playdoh& p){
  p.read(is);
  return is;
}

int main(){

  
  playdoh p1; 
  p1.display(std::cout); // Updated display call

  //std::cout << p1;

  //playdoh p2;
  //p2.read(std::cin);
  //std::cin >> p2;
  
  //std::cout << p2;

  return 0;
}
