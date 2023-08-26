#define _CRT_SECURE_NO_WARNINGS // needed on VS to use strcpy
#include <iostream>
#include <cstring>
#include "furniture.h"
#include "main.h"
using namespace std;

void display(furniture furn){
 cout << furn.name << endl;
 cout << furn.size << endl;
}

void increaseSize(furniture furn, int s){
  furn.size += s;
}

void decreaseSize(int s, furniture furn){
  furn.size -= s;
}

int main(){

  furniture furn;
  char x [] = "Chair";
  strcpy(furn.name, x);
  furn.size = 1;
  display(furn);

//#define DEFAULT
#ifdef DEFAULT
  increaseSize(furn, 10);
  display(furn);

  increaseSize(furn);
  display(furn);
#endif

}