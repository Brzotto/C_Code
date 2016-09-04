#include <stdio.h>
#include <stdlib.h>
void reverse(int *x, int ele)
{
	int i =0;
	int *p;
	printf("Backwards:\n");
	for (p = x; p<x+ele; p++)
	{
		int temp = x[ele-i-1];
		
		*p = x[ele-i-1];
		i++;
		printf("%d ", *p);
		printf("%d",x[ele-i-1]);
	}
	printf("\n");
	for (i = 0;i < 10;i++)
	{
		printf("x[%d] = %d\n", i ,x[i]);
	}
}

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int *p;
	//int *i = p;
	p = malloc(sizeof(a)* 10);
	int *original = p;
	
	printf("a = %p, p = %p\n", a,p);
	reverse(&a[0],10);
	printf("\n");
	free(original);
	return 0;
}