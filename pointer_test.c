#include <stdio.h>
#define MAX 3

int main(int argc, char *argv[])
{
	int var[] = {10, 100, 1000};
	char str[] = {'A', 'B', 'C'}; 

	int i, *ptr;
	char *ch;
	
	//ptr = &var;
	ptr = &var;
	ch = str;

	for(i=0; i<MAX; i++)
	{
	//	printf("The address of var[%d] is %x\n", i, ptr);
	//	printf("The value of var[%d] is %d\n", i, *ptr);
	//
	//	ptr++;

		printf("The address of var[%d] is %x\n", i, (ptr+i));
		printf("The value of var[%d] is %d\n", i, *(ptr+i));
	}
	
	printf("----\n");

	for(i=0; i<MAX; i++)
	{
		printf("The address of str[%d] is %x\n", i, (str+i));
		printf("The value of str[%d] is %c\n", i, *(str+i));
	}

	return 0;
}
