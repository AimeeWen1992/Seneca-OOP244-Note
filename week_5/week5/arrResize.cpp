#include <iostream>
using namespace std;
int main(){
  int n = 4;
  int* first = new int[n];
  cout << "first arr: ";
  for (int i = 0; i < n; i++){
    cout << i;
    first[i] = i;
  }
  
  cout << "\n----------------" << endl; 
  
  int* second = new int [n+1];
  for (int i = 0; i < n; i++)
    second[i] = first[i];

  second[n] = 99;
  n++;
  cout << "second arr: ";
  for (int i = 0; i < n; i++)
    cout << second[i]; 

  cout << endl;
  delete [] first;
}
