#include<stdio.h>
main()
{
	
	printf("5<6 && 6==6 value is %d", 5<6 && 6==6);
    printf("\n5>6 && 6==6 value is %d", 5>6 && 6==6);
	printf("\n5<6 && 5>6 value is %d" , 5<6 && 5>6);
	printf("\n5>7 && 5<2 value is %d" , 5>7 && 5<2);
	printf("\n3<4 || 3>4 value is %d" , 3<4 || 3>4);
	printf("\n3>4 || 3<4 value is %d" , 3>4 || 3<4);
	printf("\n3<4 || 4<5 value is %d" , 3<4 || 4<5);
	printf("\n3>4 || 3>6 value is %d" , 3>4 || 3>6);
	printf("\n!(3>4) value is %d", !(3>4));
	printf("\n!(3<4) value is %d", !(3<4));
}
