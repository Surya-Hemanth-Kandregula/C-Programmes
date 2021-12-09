#include<stdio.h>
int main()
{
	int d;
	printf("enter a number: ");
	scanf("%d", &d);
		switch(d%2)
	{
		case 0:
		printf("its AN EVEN NUMBER");
		break;
		case 1:
		printf("its an odd number");
		break;
		
	}
	
	
}

