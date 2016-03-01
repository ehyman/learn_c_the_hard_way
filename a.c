#include <stdio.h>

int main(int argc, char *argv[])
{
	int var = 20;
	int *ip;

	ip = &var;

	printf("The Address of var is %x\n", &var);
	printf("The Address of ip is %x\n", ip);
	printf("The value of ip is %d\n", *ip);
	return 0;
}
