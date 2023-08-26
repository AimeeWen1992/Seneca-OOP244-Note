#include <iostream>
#include "calc.h"
using namespace std;

int testAdd(int a, int b, int result){
  int ret = 0;
  if (add(a,b) == result){
    cout << "add function passes!" << endl;;
    ret = 1;
  }
  return ret;
}

int testMinus(int a, int b, int result){
  int ret = 0;
  if (minus_mine(a,b) == result){
    cout << "minus function passes!" << endl;;
    ret = 1;
  }
  return ret;
}

int testSum(int arr[], int len,  int result){
  int ret = 0;
  if (sum(arr,len) == result){
    cout << "sum function passes!" << endl;;
    ret = 1;
  }
  return ret;
}

int main() {

  int counter = 0;
  int arr[] = {1, 2, 3};

  cout << "Testing functions..." << endl;
  counter += testAdd(1, 2, 3); // 1 + 2 = 3 ???
  counter += testMinus(1, 1, 0); // 1 - 1 = 0 ???
  counter += testSum(arr, 3, 6); // 1 + 2 + 3 = 6 ???
  cout << "number of tests that passed: " << counter << endl;
}
