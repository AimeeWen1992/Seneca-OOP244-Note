#include <iostream>
using namespace std;

int add(int a, int b){

        return a + b;
}

int add(double a, double b, double c){

        return a + b + c;
}

int main(){

        cout << "add1: " << add(1,2) << endl;
        cout << "add2: " << add(1,2,3) << endl;
        return 0;
}
