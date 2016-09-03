#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool is_prime(int x);

int main()
{
	int num = 0;
	printf("Enter a number to test if its prime: ");
	scanf("%d",&num);

	if (is_prime(num))
		printf("%d is prime\n",num);
	else
		printf("%d is not prime\n",num);
}
bool is_prime(int x)
{
	int max = (int) sqrt(x);

	for (int i = 2; i<=max; i++)
	{
		if (x % i == 0)
			return false;
	}
	return true;
}