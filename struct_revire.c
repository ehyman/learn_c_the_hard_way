#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct Student
{
	char  *name;
	int   age;
	short grade;
	char  *sex;
};

int main(int argc, char *argv[])
{
	struct Student *tom = malloc(sizeof(struct Student));
	assert(tom != NULL);

	tom->name  = "Tommy";
	tom->age   = 10;
	tom->grade = 4;
	tom->sex   = "male";
	
	printf("%s is %s, and he is %d years old, and he is grade %d.\n", tom->name, tom->sex, tom->age, tom->grade);
	free(tom);

	return 0;
}
