#define _CRT_SECURE_NO_WARNINGS // needed on VS for strcpy
#include <iostream>
#include <cstring>
using namespace std;

int main(){
//#define STA
#ifdef STA
  char y[10];  // static array
  strcpy(y, "up");
  cout << "What is " << y << "?" << endl;
#endif

//#define DYN
#ifdef DYN
  char* y = nullptr; // init to nullptr
  int len = 0;
  cout << "Enter the number of char needed for your string: ";
  cin >> len;
  y = new char[len+1]; // dynamically allocate len + 1 memory (+1 for the nullbyte)
  cin.width(len+1); // set the width so only len number of characters are accepted (+1 for nullbyte)
  cout << "Enter the string: "; cin >> y;
  cin.ignore(2000, '\n'); // clear the input buffer
  cout << "The value of y: " << y << endl;
  delete [] y; // deallocate y

  cout << "Enter the NEW number of char needed for your string: ";
  cin >> len;
  y = new char[len+1]; // second dynamic allocation of y
  cin.width(len+1);
  cout << "Enter the string: "; cin >> y;
  cin.ignore(2000, '\n'); // clear the input buffer
  cout << "The value of y: " << y << endl;
  delete [] y; // deallocate y again, don't have a memory leak!

#endif

}