#include<stdio.h>
#define pi 3.14  //use of macro 
void main() 
{ 
	int radius; 
	float area; 
	printf("Enter radius : "); 
	scanf("%d", &radius); 
	area = pi*radius*radius; 
	printf("\nArea = %f\n",area); 
} 
