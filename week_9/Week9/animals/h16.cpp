// Virtual functions - Polymorphic
// h16.cpp

#include "Animal.h"

void foo(Animal a){
  a.display();
}

void goo(Animal& a){
  a.display();
}

void foogoo(Animal& a){
  a.Animal::display();
}

int main(){
  Animal* a; // Static typing
  a = new Animal(); // Dynamic typing
  a->display();  // ani
  foo(*a); //ani
  goo(*a);  //ani
  delete a;
  a = new Horse(); // Dynamic typing
  a->display(); //horse
  foo(*a); //ani
  goo(*a); //ani
  foogoo(*a); //ani
  delete a;
}
