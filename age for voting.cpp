#include<stdio.h>
int main(void)
{
	int a;
	printf("Enter Your age: ");
	scanf("%d", &a);
	if(a>=18)
	{
		printf("You Are Eligible For Voting");
		
	}
	else
	{
		printf("You Are Not Eligible For Voting");
	}
	
}
