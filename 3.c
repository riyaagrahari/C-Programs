//3)WAP to print 1 to 100,without using any loop.

#include<stdio.h> 
void printn(int a)
{ 
	if(a>0) 
	{
		printn(a-1); 
		printf("%d ",a); 
	} 
} 
void main() 
{
	printn(100); 
	printf("\n"); 
}
