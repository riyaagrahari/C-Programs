//WAP to print the triangle of letters in increasing order of lines.(nested loop)
#include<stdio.h> 
void main() 
{ 
	char l,a = 'A' ; 
	int i,j; 
	printf("Enter alphabet till which triangle is required : "); 
	scanf("%c",&l); 
	for(i=1;i<=(l-'A'+1);i++) 
	{ 
		for(j=1;j<=i;j++) 
		{ 
			printf("%c", a); 
		} 
			printf("\n"); 
		a++; 
	}
}
