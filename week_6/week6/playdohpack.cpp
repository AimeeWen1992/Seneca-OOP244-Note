#define _CRT_SECURE_NO_WARNINGS

// playdohpack.cpp
//

#include <iostream>
#include <cstring>
#include <cstdlib>
#include "playdohpack.h"
using namespace std;

PlaydohPack::PlaydohPack(){
  //cout << "In Pack default constr" << endl;
  name[0] = '\0';
  playdohs = nullptr;
  playdohCount = 0;
}

PlaydohPack::PlaydohPack(const char* packName, const playdoh* ps, int pn){
  //cout << "In Pack 3 arg constr" << endl;

  // Validate the parameters
  bool valid = packName != nullptr || packName[0] != '\0';
  if (valid) {
    if (ps != nullptr && pn > 0){
      for (int i = 0; i < pn; i++){
        valid = ps[i]; // We're using the bool conversion from last week!
        //valid = (ps[i].getWeight > 0);
      }
    }
    else{
      valid = false;
    }
  }

  if (valid) { // Everything is valid so let's create the object with the params
    strncpy(name, packName, max_name); 
    playdohCount = pn;

    // allocate new memory for the playdohs
    playdohs = new playdoh[pn];

    for (int i = 0; i < pn; i++){
      playdohs[i] = ps[i]; // Copy the playdohs into our array
    }
  }
  else{
    playdohs = nullptr;
    *this = PlaydohPack(); // Set empty state
  }
}

// Destructor
PlaydohPack::~PlaydohPack(){
  cout << "In Pack destr" << endl;
  delete [] playdohs; // Make sure to do this!!!
  //playdohs = nulltpr;
}

// Copy Constr
//PlaydohPack::PlaydohPack(const PlaydohPack& src){
//  cout << "Inside CC " << endl;
  // Direct call
  //playdohs = nullptr;
  //*this = src; // This calls the assign operator

  // Shallow copy non dynamic resources 
  //strncpy(name, src.name, max_name);
  //playdohCount = src.playdohCount; 

  //// Allocate memory for the playdohs
  //if (src.playdohs != nullptr){
  //  playdohs = new playdoh[playdohCount];  
  //  // copy data from the source resource
  //  // to the newly allocated source
  //  for (int i = 0; i < playdohCount; i++){
  //    playdohs[i] = src.playdohs[i];
  //  }
  //}
  //else{
  //  playdohs = nullptr; // set it to null if we can't copy
  //}
//}

//// Assignment operator
//PlaydohPack& PlaydohPack::operator=(const PlaydohPack& src){
//  // Check for self assignment
//  if (this != &src) {
//    cout << "This is different" << endl;
//    // shallow copy non dynamic variables
//    playdohCount = src.playdohCount;
//    strncpy(name, src.name, max_name);
//
//    // deallocate previous allocated memory
//    delete [] playdohs;
//    // allocate new memory if needed
//    if (src.playdohs != nullptr){
//      playdohs = new playdoh[playdohCount];
//      // deep copy
//      for (int i = 0; i < playdohCount; i++){
//        playdohs[i] = src.playdohs[i];
//      }
//    }
//    else {
//      playdohs = nullptr; // set to null
//    }
//  }
//  
//  return *this;   
//}

void PlaydohPack::display() const{
  cout << "Our pack of playdoh named: " << name << " contains..." << endl;
  for (int i = 0; i < playdohCount; i++){
    cout << "#" << i << " Colour: " << playdohs[i].getColour() 
         << " Weight: " << playdohs[i].getWeight() << endl;
  } 
}

// Change colours to 'b' 
void PlaydohPack::changeColour(){
  for (int i = 0; i < playdohCount; i++)
    playdohs[i].setColour('b');
}

// Change the pack's name
void PlaydohPack::changePackName(const char* n){
  strcpy(name, n);
}

int main(){

  cout << "How many playdoh do you want in the pack:";
  int num = 0;
  cin >> num;

  playdoh* starter = new playdoh[num];
  for (int i = 0; i < num; i++){
    starter[i] = playdoh('r', rand() % 300 + 1);
  }
  cout << "redPack1" << endl;

  PlaydohPack redPack1("Red Pack1", starter, num);
  redPack1.display(); 
  //cout << "***********************" << endl;
  //cout << "redPack2" << endl;

  //PlaydohPack redPack2 = redPack1; // copy constr
  //PlaydohPack redPack2;
  //redPack2 = redPack1; // assignment op copy
  //redPack2.display();
  //cout << "***********************" << endl;

  //redPack2.changeColour();  
  //redPack2.changePackName("Red Pack2");
  //cout << "redPack1" << endl;
  //redPack1.display();
  //cout << "redPack2" << endl;
  //redPack2.display();

  return 0;
}
