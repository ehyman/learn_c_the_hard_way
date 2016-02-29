#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person{
	char *name;
	int age;
	int height;
	int weighg;
};

struct Person *Person_create(char *name, int age, int height, int weght)
{
	struct Person *who = malloc(sizeof(struct(Person)));
	assert(who != NULL);

	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;

	return who;
}

void Person_destory(struct Person *who)
{
	assert(who != NULL);

	free(who->name);
	free(who);
}



int main(int argc, char *argv[])
{

	return 0;
}
