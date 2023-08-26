#include <iostream>
#include <cstring>
using namespace std;

struct furniture {

  char name[10];
  int size;

  void setName(char * n){
    strcpy(name, n);
  }

  void setSize(int s){
    size = s;
  }
};

int main(){

  furniture furn;
  char x [] = "Chair";
  furn.setName(x);
  furn.setSize(10);

  cout << furn.name << endl;
  cout << furn.size << endl;
}
