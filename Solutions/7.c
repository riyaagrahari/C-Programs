/*7)
.WAP to print.
    1
    12
    123
    1234
    12345
    1234
    123 
    12
    1
*/
#include<stdio.h> 
void main() 
{ 
	int i,j; 
	for(i=1;i<=5;i++) 
	{	
		for(j=1;j<=i;j++) 
		{
			printf("%d ",j); 
		}
		printf("\n"); 
	} 
	for(i=4;i>=1;i--) 
	{
		for(j=1;j<=i;j++) 
		{
			printf("%d ",j); 
		}
		printf("\n"); 
	} 
}
