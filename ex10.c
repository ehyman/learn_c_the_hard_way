#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	for(i=1; i<argc; i++)
	{
		printf("arg %d is %s\n", i, argv[i]);
	}
	
	char *states[] = {"washington", "texas", "newyork", "california", NULL, '\0'};
	
	int num_states = 6;
	for(i=0; i<num_states; i++)
	{
		printf("state %d: %s\n", i, states[i]);
	}
	return 0;
}
