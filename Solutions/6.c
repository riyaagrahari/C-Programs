/*6)
WAP to print
          *
       *  *  *
   *   *  *  *  *
*  *   *  *  *  *  *
*/
#include<stdio.h>
void main() 
{ 
	int i,j,k;int m=1; 
	
	for(i=1;i<=4;i++)
	{
		for(j=3;j>=i;j--)
		{
			printf("\t");
		}
	
	for(k=1;k<=m;k++)
	{
		printf("*\t");
	}
	m=m+2;
		printf("\n");
	
			}
}
	
