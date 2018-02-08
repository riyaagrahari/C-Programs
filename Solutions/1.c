//1) Write a program to find the perfect number.
#include<stdio.h> 
void main() 
{
	int i,n;
	int s=0; 
	printf("Enter a Number\n"); 
	scanf("%d",&n); 
	for(i=1;i<n;i++) 
	{
		if(n%i==0)
		s=s+i;
	}
	if(s==n)
		printf("%d is a perfect number\n",n);
	else
		printf("%d is not a perfect number\n",n);
}
