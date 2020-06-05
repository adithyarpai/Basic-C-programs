//Decide what you want to eat

#include<stdio.h>

int main()
{
	int ch;
	
	printf("Can't decide what you want to eat? Worry no more! Just choose a number between 1 and 5!\n");
	scanf("%d",&ch);
	do
	{ 
		a : switch(ch)
		{
			case 1 :
				printf("Food Item : Waffles\nPrice: Rs 125");
				break;
			case 2 :
				printf("Food Item : Vadapav\nPrice: Rs 30");
				break;
			case 3 :
				printf("Food Item : Bhelpuri\nPrice: Rs 25");
				break;
			case 4 :
				printf("Food Item : Pizza\nPrice: Rs 279");
				break;
			case 5 :
				printf("Food Item : Ice cream\nPrice: Rs 75");
				break;
			default:
				printf("I can't help you if you dont choose between 1 and 5. Try again!!\n");
				scanf("%d",&ch);
				goto a;
		}
	}while(ch > 5);
	
	return 0;
}
