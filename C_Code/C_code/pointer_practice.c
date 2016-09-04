#include <stdio.h>
#include <stdlib.h>
typedef struct example start;
	typedef struct example{
		int x;
		int y;
		start *next;
	}ex;
	
int main()
{
	start *road, *root, *temp;
	road = malloc(sizeof(start)*5);
	root = malloc(sizeof(start)*5);
	temp = malloc(sizeof(start)*5);
	road->x = 5;
	road->y = 6;
	//temp = (start *)malloc(sizeof(start));
	//road->next = temp;
	//road = temp;
	road->next = temp; 
	temp->x = 7;
	temp->y = 8;
	while (road != NULL)
	{
	printf("nums (x,y) = (%d,%d)\n",road->x,road->y);
	road = road->next;
	}
	
	return 0;
}