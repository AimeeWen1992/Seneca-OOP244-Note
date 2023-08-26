#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Compound.h"
#include "Playdoh.h"
using namespace std;

//#define comp
#define play

int main(){
 
  #ifdef comp 
  Compound c1(10, "meta");
  Compound c2(20, "beta");
  c1.display();
  c2.display();
  cout << "*****" << endl;
  Compound c;
  c = c1; // CA is called
  c.display();
  Compound x = c2; // CC is called
  x.display();
  #endif

  #ifdef play
  Playdoh p1("green", 30, "gamma");
  Playdoh p2("red", 40, "alpha");
  p1.display();
  p2.display();
  cout << "*****" << endl;
  Playdoh p;
  p = p1;
  p.display();
  Playdoh z = p2;
  z.display();
  #endif
}
