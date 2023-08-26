#include "calc.h"

int add(int a, int b){
  return a + b;
}

int minus_mine(int a, int b){
  return a - b;
}

int sum(int arr[], int len){
  int ret = 0;
  for (int i = 0; i < len; ++i)
    ret += arr[i];
  return ret;
}