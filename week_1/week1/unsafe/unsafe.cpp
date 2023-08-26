#include <stdio.h>

void foo();

void foo(char x[]){

        printf("%s", x);
}

int main(){

        foo(25);
        return 0;
}
