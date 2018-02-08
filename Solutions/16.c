#include<stdio.h> 
void main() 
{
	int i; 
	int n, sum=0; 

	for(i=0;i<=10;i++) 
	{
		printf("Enter the number : "); 
		scanf("%d",&n); 
		//not to enter negative number 
		if(n<0) 
		{
			break; 
		}
		//below block wont add 1 to the sum 
		else if(n==1) 
		{
			continue; 
		}
		sum+=n; 
	} 
	printf("\nSum : %d",sum); 
	
	//if sum is even it will print even and if sum is odd it will print odd 

	if(sum%2==0) 
	{
		goto even;
	}
	else 
	{
		goto odd;
	}
	even: 
		printf("\n even");
	odd: 
 		printf("\n odd"); 
}
