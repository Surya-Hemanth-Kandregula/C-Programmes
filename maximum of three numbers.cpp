#include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("Enter A Number: ");
	scanf("%d", &a);
	printf("Enter A Number: ");
	scanf("%d", &b);
	printf("Enter A Number: ");
	scanf("%d", &c);
	if(b<a>c)
	{
		printf("A Given Number Is Maximum");
		
	}
	else if(a<b>c)
	{
		printf("B Given Number Is Maximum");
	}
	else if(a<c>b)
	{
		printf("C Given Number Is Maximum");
	}
	
}
