#include <iostream>
namespace mike {

        int y = 11;
}

using namespace std;
using namespace mike;

int main(){

        int y;
        cout << "What is y: " << y << endl;
        cout << "Enter data: " << endl;
        cin >> y; 
        cout << "This is y:" << y << endl;
        return 0;
}
