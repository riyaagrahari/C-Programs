//WAP to print sum of odd numbers and sum of even numbers of all positive number entered by the user, till the user enter 0.
#include<stdio.h> 
void main() 
{
	int n; int se=0, so=0;
	do
	{ 
		printf("Enter number\n "); 
		scanf("%d",&n);
 		if((n%2==0)&&(n!=0))
 			se=se+n;
		else
			so=so+n;
	}while(n!=0);
	printf("Sum of odd numbers : %d\n",so);
	printf("Sum of even numbers : %d\n",se);
}
