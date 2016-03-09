#include <stdio.h>

struct s{
	int a;
	char c;
};

int main(void)
{
	printf("sizeof(struct s) = %ld\n", sizeof(struct s));
	return 0;
}
