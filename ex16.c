#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

struct Person{
	char *name;
	int age;
	int height;
	int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight)
{
	struct Person *who = malloc(sizeof(struct Person));
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

void Person_print(struct Person *who)
{
	printf("Name:%s\n", who->name);
	printf("Age:%d\n", who->age);
	printf("Height:%d\n", who->height);
	printf("Weight:%d\n", who->weight);
}

int main(int argc, char *argv[])
{
	struct Person *joe = Person_create("joe", 32, 64, 140);
	struct Person *frank = Person_create("frank", 20, 70, 180);

	printf("joe is at the memory location:%p\n", joe);
	Person_print(joe);

	printf("frank is at the memory location:%p\n", frank);
	Person_print(frank);

	joe->age+= 20;
	joe->height-=2;
	joe->weight+=20;

	frank->height+=4;

	Person_print(joe);
	Person_print(frank);

	Person_destory(joe);
	Person_destory(frank);

	return 0;
}
