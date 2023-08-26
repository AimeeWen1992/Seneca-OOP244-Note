// arrayptr.cpp
#include <iostream>
using namespace std;

const int numOfFurn = 3;

struct furniture{
  char name[10];
  int size;
};

int main(){

  furniture a = { "Chair", 10 };
  furniture b = { "Table", 20 };
  furniture c = { "Sofa", 30 };

  furniture* furn [numOfFurn]; // array of furniture pointers
  furn[0] = &a;
  furn[1] = &b;
  furn[2] = &c;
  
  for (int i = 0; i < numOfFurn; i++){
    cout << furn[i]->name << " " << furn[i]->size << endl; // using -> notation
  }

}
