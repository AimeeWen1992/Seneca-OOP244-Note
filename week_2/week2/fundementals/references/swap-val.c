#include <stdio.h>

void swap_mine(int a, int b){

	int c;
	c = a;
	a = b;
	b = c;
}

int main(){

	int left = 0;
	int right = 1;

	printf("before left: %d\n", left);
	printf("before right: %d\n", right);

	swap_mine(left, right);

	printf("after left: %d\n", left);
	printf("after right: %d\n", right);
}
