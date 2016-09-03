#include <stdio.h>
#include <stdlib.h>

#define MAX 128
int size_of_stack = 0;

void push(int **sp, int num)
{
	if (size_of_stack >= MAX)
	{
		printf("Stack Overflow.");
		return;
	}
	else if (size_of_stack == 0)//initialization of stack
	{
		**sp = num;
		size_of_stack++;
	}
	else 
	{
		(*sp)++;
		**sp = num;
		size_of_stack++;
	}
}
int pop (int **sp)
{
	int num = 0;
	if (size_of_stack <=0)
	{
		printf("Stack Underflow");
		return -1;
	}
	else
	{		
		num = **sp;
		(*sp)--;
		size_of_stack--;
		return num;
		
	}
}
void display(int *mem)
{
	int disp = size_of_stack;
	//printf("disp = %d", disp)

	printf("\nDescending Order:\nStack:\n");
	while (disp > 0)
	{
		//printf("mem = %p\n",mem);
		printf("%d \n", *(mem++));
		//printf("mem = %p\n",mem);
	 	disp--;
	}
}
void delete(int *mem)
{
	free(mem);
}

//mem 5000 = 100210313
//int x = 5;
//mem 5000 =5;
//mme 5001 = 102313132
int main()
{
	int *sp = malloc(sizeof(int)*MAX);
	//printf("size of %zu", sp);
	int *mem = sp;
	int data = 0;
	printf("Enter a number to place onto the stack:\n");
	scanf("%d", &data);
	push(&sp,data);
	printf("First push = %d\n", *sp);
	push(&sp, 52);
	printf("Second push = %d\n", *sp);
	push(&sp, 75);
	printf("Third push = %d\n", *sp);

	//push(&sp, 512);
	//push(&sp, 553);
	//push(&sp, 76);
	printf("First pop = %d\n", pop(&sp));
	printf("Second pop = %d\n", pop(&sp));
	display(mem);
	delete(mem);
	display(mem);




}