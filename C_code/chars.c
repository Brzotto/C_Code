#include <stdio.h>
#include <stdlib.h>
//testing
int main()	
{
	char *ch = (char *)malloc(sizeof(char) * 16);
	char *name = "Zotto";
	//int *(p_x)[5];
	int *(p_x) = malloc(sizeof(*p_x)*12);
	p_x[2] = 5;
	printf("%d\n",p_x[2]);
	*(p_x+12 )=7;
	//char *ch2;
	scanf("%s", ch);
	printf("My name is: %s\n", ch);
	printf("The fourth letter is %.1s",(ch+3));
	printf("Name is %c\n",name[2]);
	printf("%d\n",p_x[12]);
	free(ch);
	free(p_x);
	printf("My name is: %s\n", ch);
}