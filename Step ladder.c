//Step ladder
#include<stdio.h>

int main()
{
	int i,j,n;
	printf("Enter the number of steps you want\n");
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		for(j=0;j<i;++j)
		{
			printf("01");
		}
		printf("01\n");
	}
	return 0;
}
