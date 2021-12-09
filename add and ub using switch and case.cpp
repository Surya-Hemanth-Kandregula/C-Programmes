#include<stdio.h>
#include<math.h>
int main()
{
	
	char operator;
	int a,b,d;
	printf("enter a opertaor from (+ , - , * , /) :  ");
	scanf("%c", &operator);
	printf("enter a number: ");
	scanf("%d, &a");
	printf("\nenter a number: ");
	scanf("%d, &b");
	switch(operator)
	{
		case '+': d=a+b
		printf("the sum of three number is %d", d);
		case '-': d=a-b-c
		printf("the sum of three number is %d", d);
		case '*': d=a*b*c
		printf("the sum of three number is %d", d);
		case '/': d=a/b/c
		printf("the sum of three number is %d", d);
	}
}

