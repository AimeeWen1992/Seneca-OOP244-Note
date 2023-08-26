#include <iostream>
#include "playdoh.h"
using namespace std;

int main(){

  int n = 0; // number of playdohs
  playdoh* ps = nullptr; // our playdoh array

  cout << "How many playdohs do you want to have: " << endl;
  cin >> n; // user inputs some number

  ps = new playdoh[n]; // allocate dynamic memory for playdohs

  for (int i = 0; i < n; i++){
    cout << "Playdoh colour (char): ";
    cin >> ps[i].colour;
    cout << "Playdoh weight (int): ";
    cin >> ps[i].weight;
  }

  for (int i = 0; i < n; i++){
    cout << "Playdoh " << i << " colour: " << ps[i].colour << 
            " weight: " << ps[i].weight << endl;
  }

  delete [] ps; // Remember to clean up
}
