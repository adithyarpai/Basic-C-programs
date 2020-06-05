//Basic grading system

#include<stdio.h>

int main()
{
	int marks;
	char grade,name[20];
	grade = 'F';
	printf("Enter your name:\n");
	scanf("%s",name);
	printf("Enter your marks:\n");
	scanf("%d",&marks);
	if(marks >= 85)
	{
		grade = 'A';
		printf("%s has scored %d and attained grade %c\n",name,marks,grade);
	}else if(marks >= 70)
	{
		grade = 'B';
		printf("%s has scored %d and attained grade %c\n",name,marks,grade);
	}else if(marks >= 55)
	{
		grade = 'C';
		printf("%s has scored %d and attained grade %c\n",name,marks,grade);
	}else if(marks >= 40)
	{
		grade = 'D';
		printf("%s has scored %d and attained grade %c\n",name,marks,grade);
	}else
		printf("%s has scored %d and attained grade %c\n",name,marks,grade);
	return 0;
}
