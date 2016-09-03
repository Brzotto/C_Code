#include <stdio.h>
#include <stdlib.h>
void printer(int *x)
{
	printf("pt2 = %d\n", *x);
}


int main(int argc, char* argv[])
{
	int test = atoi(argv[1]);
	char* name = argv[2];

	int *pt = &test;
	printf("My name is %s\n", name);
	printf("test = %d, pt = %d\n", test, *pt);
	test = 7;
	printer(pt);
	return 0;
}