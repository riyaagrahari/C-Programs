//WAP  to print GCD of two positive number.
#include<stdio.h> 
void main() 
{  
	int i,a,b,g; 
	printf("Enter the two positive number\n"); 
	scanf("%d%d",&a,&b); 

	for(i=1;i<=a && i<=b;i++)
	{
		if((a%i==0)&&(b%i==0))
		{
		 g=i;
		}
	}
	printf("GCD of %d and %d is: %d\n",a,b,g);
}
