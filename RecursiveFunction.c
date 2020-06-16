//Sum of digits of number using recursive function
#include <stdio.h> 
int sum(int n) 
{ 
    if (n == 0) 
       return 0; 
    return (n%10 + sum(n/10)); 
} 

int main() 
{ 
    int num ; 
    printf("Enter a number :\n");
    scanf("%d",&num);
    int result = sum(num); 
    printf("Sum of digits in %d is %d\n", num, result); 
    return 0; 
} 
