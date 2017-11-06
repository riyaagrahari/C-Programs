/*WAP that accepts an integer N; if Integer N=5, then print the pyramid as shown in the following 
                              5 5 5 5 5 
                               4 4 4 4
                                3 3 3
                                 2 2
                                  1
*/
#include<stdio.h> 
void main() 
{ 
	int n; 
	printf("Enter the value of N\n"); 
	scanf("%d",&n); 
	int i,j,k;int t=0,c=n;
	for(i=n;i>=1;i--) 
	{
		for(j=1;j<=t;j++) 
		{
			printf(" ");
		}
		for(k=1;k<=i;k++) 
		{
			printf("%d ",c);
		}
		t++;c--;
		printf("\n");
	}
}
