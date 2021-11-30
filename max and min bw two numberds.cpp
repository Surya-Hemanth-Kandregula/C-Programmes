#include<stdio.h>
int main(void)
{
	int a,b;
	printf("Enter A Number: ");
	scanf("%d", &a);
	printf("Enter A Number: ");
	scanf("%d",&b);
	if(a>b)
	{
		printf("A is greater than B");
	}
	else
	{
		printf("B is greater than A");
	}
}
