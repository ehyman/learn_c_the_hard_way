#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

struct Person{
	char *name;
	int age;
	int height;
	int weight;
};

struct Person *person_create(char *name, int age, int height, int weight)
{
	struct Person *who = malloc(sizeof(struct Person));
	assert(who != NULL);

	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;

	return who;
}

void Person_print(struct Person *who)
{
	printf("Name : %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n", who->weight);
}

void Person_destory(struct Person *who)
{
	assert(who != NULL);

	free(who->name);
	free(who);
}

int main(int argc, char *argv[])
{
	struct Person *joe = person_create("joe", 25, 172, 180);

	Person_print(joe);
	Person_destory(joe);

	return 0;
}
