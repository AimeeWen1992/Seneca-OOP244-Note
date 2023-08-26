#include <iostream>
#include <cstdio> // #include <stdio.h>
using namespace std;

namespace nick {
  int x = 2;
  int max() {
  return 999;        
  }
}

namespace scott {
  int x = 2;
  int max() {
  return 888;
}
}

using namespace nick;
using namespace scott;

int main(){

  int x = 99; 
  cout << "This is our x: " << x  << endl;
 //cout << "This is scott's x: " << scott::x  << endl;
 //cout << "This is nick's x: " << nick::x  << endl;
}
