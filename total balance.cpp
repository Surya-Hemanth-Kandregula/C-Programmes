#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("enter NO of 10s: ");
	scanf("%d",&a);
	printf("enter NO of 20s: ");
	scanf("%d",&b);
	printf("enter NO of 50s: ");
	scanf("%d",&c);
	printf("enter NO of 100s: ");
	scanf("%d",&d);
	a=a*10;
	b=b*20;
	c=c*50;
	d=d*100;
	printf("the total balance is: %d", a+b+c+d );
}
