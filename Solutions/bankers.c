#include<stdio.h>
int main()
{
  int p,r;
  printf("Enter number of process\n");
  scanf("%d",&p);
  printf("Enter number of resources\n");
  scanf("%d",&r);
  int max[p][r];int alloc[p][r];int need[p][r];
  int avbl[r];
    for(int i=0;i<p;i++)
    {
	printf("Enter count of max instance of each resource required for process %d\n",(i+1));
    for(int j=0;j<r;j++)
	{
		
		scanf("%d",&max[i][j]);
   	}
	printf("\n");	
    }

   for(int i=0;i<p;i++)
    {
	printf("Enter count of allocated instance of each resource required for process %d\n",(i+1));
    for(int j=0;j<r;j++)
	{
		
		scanf("%d",&alloc[i][j]);
   	}
	printf("\n");	
    }
   for(int i=0;i<p;i++)
    {
    for(int j=0;j<r;j++)
	{
		
		need[i][j]=max[i][j]-alloc[i][j];
   	}
		
    }
   
   printf("\nENTER AVAILABLE INSTANCE OF EACH RESOURCE\n");
   for(int i=0;i<r;i++)   
   scanf("%d",&avbl[i]);
     int work[r],fin=0;int finish[p];
   for(int i=0;i<r;i++) 
 	work[i]=avbl[i];
  
   for(int i=0;i<p;i++) 
 	finish[i]=0;
  
  for(int k=0;k<p;k++)
  {
   for(int i=0;i<p;i++)
	{
          int f=1;int k=0;
		for(int j=0;j<r;j++)
		{
			if(need[i][j]>work[k])
			{
				f=0;
                        }
                k++;
		}
       		if(f==1 && finish[i]==0)
               {
		fin++;
                finish[i]=1;
		printf("Process %d will run\n",i+1);       
                for(int l=0;l<r;l++)
                work[l]=work[l]+alloc[i][l];
   
               }
	  }
	
  }   						
  if(fin==p)
  printf("System is in safe state\n");
  else
  printf("System is in unsafe state\n");
  return 0;
}
