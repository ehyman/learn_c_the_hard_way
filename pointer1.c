#include <stdio.h>

int main(int argc, char * argv[])
{
	int ages[] = {20, 21, 22, 23, 24};
	char *names[] = {
		"haha", "hehe", "heihei", "hoho", "huhu"
	};

	int i = 0;
	int count = sizeof(ages) / sizeof(int);

	for(i=0; i<count; ++i)
	{
		printf("%s has %d years alive.\n", names[i], ages[i]);
	}
	
	printf("\n------------\n");

	int *cur_age = ages;
	char **cur_name = names;
	
	printf("%d --> %p\n", *cur_age, cur_age);
	printf("%s --> %p\n", *cur_name, cur_name);

	printf("\n------------\n");

	for(i=0; i<count; ++i)
	{
		printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
	}

	return 0;
}
