#include<stdio.h>

void swapping(int c, int d) {
	int tmp;
	tmp = c;
	c = d;
	d = tmp;
	printf("In function: %d %d\n", c , d);
}

int main(void) {
	int a,b;

	a=5;
	b=10;
	printf("input: %d %d\n", a, b);
	swapping(a,b);
	printf("output: %d %d\n", a, b);
	return 0;
}

