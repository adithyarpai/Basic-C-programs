//Enter elements into a matrix and find the sum of its diagonals
#include<stdio.h>

void inputMatrix(int size,int matrix[][10]);
void dispMatrix(int size,int matrix[][10]);
void sumDiag(int matrix[][10],int size);

int main()
{
	int n;
	int a[10][10];
	printf("Enter the size of matrix you want\n");
	scanf("%d", &n);
	inputMatrix(n,a);
	dispMatrix(n,a);
	sumDiag(a,n);
	return 0;
}

//Function to add data into matrix
void inputMatrix(int size,int matrix[][10])
{
	int i,j;
	printf("Enter the elements of the matrix\n");
		for(i = 0;i < size;i++)
	{
		for(j=0;j < size;j++)
		{
			scanf("%d", (*(matrix + i) + j));
		}
	}
}

//Function to display matrix
void dispMatrix(int size,int matrix[][10])
{
	int i,j;
	printf("the matrix\n");
	for(i = 0;i < size;i++)
	{
		for(j = 0;j < size;j++)
		{
			printf("%d",*(*(matrix + i) + j));
			printf("\t");
		}
		printf("\n");
	}
}

//Function to get sum of diagonals
void sumDiag(int matrix[][10],int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i,j;

	for(i=0;i < size;++i)
	for(j=0;j < size;++j)
	{
		if(i==j)
			sum1+=matrix[i][j];
		if(i+j==(size-1))
			sum2+=matrix[i][j];
	}
	printf("Sum of diagonals are %d and %d",sum1,sum2);
}
