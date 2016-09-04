#include <stdio.h>
#include <stdlib.h>

#define MAX 128
int size = MAX;
int size_of_stack = 0;
struct STACK{
	int data;
	struct STACK *next;
	struct STACK *prev;
}*base, *top;

typedef struct STACK stack;


void push(int num)
{
	stack *temp;
	temp = malloc(sizeof(stack));//allocate mem for each stack obj
	//help = malloc(sizeof(stack));
	temp->data = num;
	if (size_of_stack >= MAX)
	{
		printf("Stack Overflow");
	}	
	else if (size_of_stack == 0)
	{
		top = temp;
		top->next = NULL;
		size_of_stack++;

	}
	else{
		temp->next = top;
		top = temp;
		size_of_stack++;
		//printf("1s->prev1 %p\n",s->prev);
		
	}	
}
int pop ()
{
	stack *temp;
	int val = 0;
//	s = s->prev;
	temp = malloc(sizeof(stack));//allocate mem for each stack obj
	//temp = top;
	if (size_of_stack <=0) 
	{
		printf("Stack underflow\n");
		return -1;
	}
	else
	{
		//printf("top = %d\n", top->data);
		//val = top->data;
		
		//Stop->next = top;
		val = top->data;
		top = top->prev;

		printf("top = %d\n", top->data);
		return val;
	}
}
/*void display(stack *s)
{
	int disp = size_of_stack;
	s = base;
	while (s != NULL)
	{
		printf("%d\n", top->data);
		printf("hi");
		//s = prev;
		disp--;
	}
}*/

int main()
{
	//stack *top, *mem;
	//top = malloc (sizeof(stack)*size);
	base = malloc (sizeof(stack)*size);
	//prev = malloc (sizeof(stack)*size);
	//top = malloc (sizeof(stack));
	//mem = top;
	int x = 0,choice = 0;
	printf("Enter a value to push to the stack: ");
	scanf("%d", &x);
	push(x);
	//push(top, x);
	printf("first push = %d\n\n",top->data);
	push(51);
	printf("second push = %d\n\n",top->data);
	push(75);
	printf("third push = %d\n\n",top->data);
	push(90);
	printf("fourth push %d\n\n",top->data);
	pop();
	printf("first pop = %d\n", top->data);
	pop();
	printf("second pop = %d\n", top->data);
	printf("hit 1 to view stack: ");
	scanf("%d",&choice);
	if (choice == 1)
	{
	//	display(mem);
	}
	return 0;
}