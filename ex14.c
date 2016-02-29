#include <stdio.h>
#include <ctype.h>

int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
	int i = 0;
	for(i=0; i<argc; i++)
	{
		print_letters(argv[i]);
	}
}

void print_letters(char arg[])
{
	int i = 0;
	while(arg[i] != '\0')
	{	
		if(can_print_it(arg[i]))
		{
			printf("'%c' == %d\t", arg[i], arg[i]);
		}
		i++;
	}
	printf("\n");
}

int can_print_it(char c)
{
	return isalpha(c) || isblank(c);
}

int main(int argc, char *argv[])
{
	print_arguments(argc, argv);
	return 0;
}

