#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("enter your amount:");
	scanf("%d", &a);
	b=a/0.5;
	c=a/1;
	d=a/2;
	printf("NO of paisa's: %d",b );
	printf("\nNO of 1's': %d",c );
	printf("\nNO of 2's: %d", d);
}
