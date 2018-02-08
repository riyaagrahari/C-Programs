//WAP to convert binary number to decimal number.
#include<stdio.h> 
void main() 
{
	int n,b,r; 
	int d=0, base=1; 

	printf("Enter a binary number\n"); 
	scanf("%d",&n); 

	b=n; 

	while(n>0) 
	{
		r=n%10; 
		d=d+r*base; 
		n=n/10; 
		base=base*2; 
	} 
	printf("The binary number is %d :\n",b); 
	printf("Its decimal equivalent is %d :\n", d); 
}
