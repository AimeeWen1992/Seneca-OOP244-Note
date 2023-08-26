#include <iostream>
using namespace std;

int main(){

  int x = 3;
  cout << "What is x1: " << x << endl;

  {
    int x = 5;
    cout << "What is x2: " << x << endl;
  }

  cout << "What is x3: " << x << endl;
}
