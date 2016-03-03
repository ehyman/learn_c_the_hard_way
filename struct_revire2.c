#include <stdio.h>
#include <stdlib.h>

struct Student
{
	char *name;
	int age;
	char *gender;
	short grade;
	int score;
};

int main(int argc, char *argv[])
{
	struct Student *tom = malloc(sizeof(struct Student));
	
	tom->name = "Tommy";
	tom->age = 10;
	tom->gender = "male";
	tom->grade = 4;
	tom->score = 100;

	printf("%s\n", tom->name);
	free(tom);

	return 0;
}
