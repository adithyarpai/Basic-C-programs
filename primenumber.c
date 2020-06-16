 //Checks if a number is prime
 #include<stdio.h>

int isPrime(int,int);

int main()
{
    int n,prime;
    printf("Enter a number:\n");
    scanf("%d",&n);
	prime = isPrime(n,n/2);
    if(prime==1)
        printf("%d is a prime number",n);
    else
    	printf("%d is not a prime number",n);
    return 0;
}

int isPrime(int num,int i)
{
    if(num==1 || num==0)
    	return 0;
	if(i==1)
	{
        return 1;
    }else
	{
        if(num%i==0)
         return 0;
        else
         isPrime(num,i-1);
    }
}
