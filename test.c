#include <stdio.h>

int main(int argc, char *argv[])
{
	int ages[] = {20, 21, 22, 23, 25};
	char *names[] = {"Zed", "Andi", "Toms", "linus", "Jimmy"};

	int i = 0;
	int count = sizeof(ages) / sizeof(int);
	
	for(i=0; i<count; i++)
	{
		printf("%s is %d years old.\n", names[i], ages[i]);
	}

	printf("------\n");

	int *cur_age = ages;
	char **cur_name = names;

	for(i=0; i<count; i++)
	{
		printf("%s has %d years alive.\n", *(cur_name+i), *(cur_age+i));
	}

	printf("------\n");
	for(i=0; i<count;i++)
	{
		printf("%s is %d years old too.\n", cur_name[i], cur_age[i]);
	}

	printf("------\n");
	for(i=count-1; i>=0; i--)
	{
		printf("%s has %d years alive.\n", *(cur_name+i), *(cur_age+i));
	}

	printf("------\n");
	for(i=count-1; i>=0; i--)
	{
		printf("%s has %d years alive.\n", names[i], ages[i]);
	}

	return 0;
}
