#include<stdio.h>
int main(void)
{
	int a;
	printf("Enter A Number: ");
	scanf("%d", &a);
	if(a%4==0)
	{
		printf("The Given Year Is Leap");
		
	}
	else
	{
		printf("The Given Year is not Leap");
	}
	
}
