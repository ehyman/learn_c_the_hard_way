#include <stdio.h>

int main(int argc, char *argv[])
{
	int ages[] = {21, 22, 23, 24, 25};
	char *names[] = {"Alan", "Blan", "Clan", "Dlan", "Elan"};

	int i = 0;
	int count = sizeof(ages) / sizeof(int);

	for(i=0; i<count; i++)
	{
		printf("%s has %d years alive.\n", names[i], ages[i]);
	}

	printf("-----\n");

	int *cur_age = ages;
	char **cur_name = names;

	printf("cur_age = %d\n", cur_age[0]);
	printf("cur_name = %s\n", cur_name[0]);

	return 0;
}
