#include <iostream>
using namespace std;

void display(int* arr, int len){
  cout << "Printing the array" << endl;
  for (int i = 0; i < len; ++i)
    cout << arr[i] << endl;
}

void input(int* arr, int len){
  for (int i = 0; i < len; ++i){
    cout << "Enter the value for the # " << i + 1 << ": ";
    cin >> arr[i];
  }
}

int main(){
//#define STAT
#ifdef STAT
  int len = 3;
  int y[3];  // static array
  y[0] = 1; y[1] = 2; y[2] = 3;
  display(y, len);
#endif

//#define DYN
#ifdef DYN
  int* y = nullptr; // init to nullptr

  y = new int; // single instance allocation
  *y = 99;
  cout << "The value of y is: " << *y << endl;
  delete y; // deallocate y

  int len = 0;
  cout << "Enter the size for the array: ";
  cin >> len;
  y = new int[len]; // second dynamic allocation of y
  input(y, len);
  display(y, len);
  delete [] y; // deallocate y

  cout << "Enter the NEW size for the array: ";
  cin >> len;
  y = new int[len]; // third dynamic allocation of y
  input(y, len);
  display(y, len);
  delete [] y; // deallocate y again, don't have a memory leak!

#endif

}