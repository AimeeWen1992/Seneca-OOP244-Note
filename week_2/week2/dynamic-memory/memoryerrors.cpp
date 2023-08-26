#define _CRT_SECURE_NO_WARNINGS // needed on VS for strcpy
#include <iostream>
#include <cstring>
using namespace std;

int main(){

  cout << "Start of program" << endl;

  // double deletion
//#define DDD
#ifdef DDD
  int* x = new int[10];
  delete [] x; // attempt to delete pointer
  delete [] x; // attempt to delete pointer again???
#endif

  // accessing memory we haven't allocated
//#define UAM
#ifdef UAM
  int* y;
  //int* y = nullptr;
  cout << "val of y: " << *y << endl;
#endif

  // memory leak
  //#define LEAK
#ifdef LEAK
  char* y = nullptr;
  for (int i = 0; i < 10; ++i){
    y = new char[100000]; // allocate new memory over and over
    strcpy(y, "HELLO");
  }
  
  delete[] y;
#endif

  cout << "End of program" << endl;
}