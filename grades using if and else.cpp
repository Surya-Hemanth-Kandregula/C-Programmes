#include<stdio.h>
int main(void)
{
	int a;
	printf("Enter A Number: ");
	scanf("%d", &a);
	if(a>=90)
	{
		printf("You scored grade O");
		
	}
	else if(a>=80)
	{
		printf("You scored grade A");
	}
	else if(a>=70)
	{
		printf("You scored grade B");
	}
	else if(a>=60)
	{
		printf("You scored grade C");
	}
	else if(a>=50)
	{
		printf("You scored grade F");
	}
}
