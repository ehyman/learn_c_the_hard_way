#include <stdio.h>
struct Person{
	char *name;
	int age;
	int weight;
	int height;
};

int main(void)
{
	printf("sizeof(struct Person) = %ld\n", sizeof(struct Person));
	return 0;
}
