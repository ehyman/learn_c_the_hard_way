#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

struct Person{
	char *name;
	int age;
	int weight;
	int height;
};

struct Person *Person_create(char *name, int age, int weight, int height)
{
	struct Person *who = malloc(sizeof(struct Person));
	assert(who != NULL);
	who->name = strdup(name);
	who->age = age;
	who->weight = weight;
	who->height = height;

	return who;
}

void Person_destory(struct Person *who)
{
	assert(who != NULL);

	free(who->name);
	free(who);
}

void Person_print(struct Person *who)
{
	printf("Name: %s\n", who->name);
	printf("Age: %d\n", who->age);
	printf("Weight: %d KG\n", who->weight);
	printf("Height: %d CM\n", who->height);
}

int main(int argc, char *argv[])
{
	struct Person *tom = Person_create("Tom", 25, 85, 170);
	printf("Tom is at memory location: %p, and memory size of Tom allocated is: %d\n", tom, (int)sizeof(tom));
	Person_print(tom);

	struct Person *lucy = Person_create("Lucy", 27, 60, 168);
	printf("Lucy is at memory location: %p, and memory size of Lucy allocated is: %d\n", lucy, (int)sizeof(lucy));
	Person_print(lucy);

	Person_destory(tom);
	Person_destory(lucy);

	return 0;
}
