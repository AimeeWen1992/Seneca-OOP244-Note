// auto.cpp
#include <iostream>
using namespace std;

struct longlonglonglonglongstruct {
  int thing;
};

int main(){

  auto x = 1;
  auto y = 'a';
  auto z = 2.2;
  cout << x << " " << y << " " << z << endl;

//#define LONG
#ifdef LONG
  longlonglonglonglongstruct mylongstruct;
  mylongstruct.thing = 5;
  auto myauto = mylongstruct;
  myauto.thing = 10;

  cout << "mylongstruct: " << mylongstruct.thing << endl;
  cout << "myauto: " << myauto.thing << endl;
#endif
}