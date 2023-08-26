// references.cpp
#include <iostream>
using namespace std;


int main(){

  int x = 5;
  int& y = x;
  cout << "#1 x: " << x << " y: " << y << endl;

  x = 6;
  cout << "#2  x: " << x << " y: " << y << endl;

  y = 7;
  cout << "#3  x: " << x << " y: " << y << endl;

  y = 8;
  cout << "#3  x: " << x << " y: " << y << endl;

  cout << "address of x: " << &x << " address of y: " << &y << endl;
}