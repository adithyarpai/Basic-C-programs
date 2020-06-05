//Swapping two numbers without using a temporary variable

#include<stdio.h>

void main()
{
	int a,b;
	printf("Enter two numbers to be swapped\n");
	scanf("%d%d",&a,&b);
	printf("Two numbers before swapping\na = %d\tb = %d\n",a,b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("Two numbers after swapping\na = %d\tb = %d",a,b);
}
