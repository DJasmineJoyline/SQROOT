#include<stdio.h>
float squareroot(int n)
{
    float sqr,temp;
    sqr=n/2;
    temp=0;
    while(sqr!=temp)
    {
        temp=sqr;
        sqr=(n/temp+temp)/2;
        
    }
    return sqr;
    
}
int main()
{
	int n;
	float sqr;
	printf("Enter a number\n");
	scanf("%d",&n);
	sqr=squareroot(n);
	printf("The square root of %d is %.2f",n,sqr);
	
	
	return 0;
}
