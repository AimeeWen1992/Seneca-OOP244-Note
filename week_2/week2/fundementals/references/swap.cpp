#include <iostream>
using namespace std;

void swap_mine(int& a, int& b){
        int c;
        c = a; // no dereferencing 
        a = b;
        b = c;
}

int main(){

  int left = 0;
  int right = 1;

  cout << "What is left: " << left << endl;
  cout << "What is right: " << right << endl;

  swap_mine(left, right);

  cout << "after swap" << endl;
  cout << "What is left: " << left << endl;
  cout << "What is right: " << right << endl;

}


