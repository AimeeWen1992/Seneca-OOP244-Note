// file-input.cpp
//

#include <iostream>
#include <fstream> // library for doing file related things

int main(){

        std::ifstream fin;
        fin.open("mytxt.txt");

        int x = 0;

        if (fin.is_open()){

          while(fin){
                fin >> x;
                if (fin)
                  std::cout << "X is: " << x << std::endl;
                else
                  std::cout << "End of file" << std::endl;
          }
        }
        else{
                std::cout << "Bad file, can't open" << std::endl;
        }

        return 0;
}
