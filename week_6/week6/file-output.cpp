// file-output.cpp
//

#include <iostream>
#include <fstream> // library for doing file related things

int main(){

        std::ofstream fin;
        fin.open("out.txt");

        if (fin.is_open()){

                fin << "Line 1" << std::endl;
                fin << "Line 2" << std::endl;
                fin << "Line 3" << std::endl;
        }
        return 0;
}
