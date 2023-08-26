// bool.cpp
#include <iostream>
using namespace std;

int greater1(int a, int b){
  int ret = 0;
  if (a > b)
    ret = 1;
  return ret;
}

bool greater2(int a, int b){
  bool ret = false;
  if (a > b)
    ret = true;
  return ret;
}

int main(){

  bool z = true;
  cout << "z: " << z << endl;

  // #define FUNC
  #ifdef FUNC
  int x = 2, y = 1;
  if (greater1(x,y))
    cout << x << " is greater1 than " << y << endl;
  
  if (greater2(x,y))
    cout << x << " is greater2 than " << y << endl;
  #endif  
}