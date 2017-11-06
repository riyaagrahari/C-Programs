#include<stdio.h> 
int main() 
{ 
	int ptype,qty; 
	float price,discount,fprice; 
	
	printf("Enter product type(1 for p1,2 for p2,3 for p3,4 for p4) :\n");
	scanf("%d",&ptype);
	printf("Enter qty :");
	scanf("%d",&qty);
	
	if(ptype==1)
	{
		price=(qty*10);
		if(qty>=5000)
			fprice=(price-(0.10*price));
		else
			fprice=price;
		}
	else if(ptype==2)
	{
		price=(qty*25);
		if(qty>=10000)
			fprice=(price-(0.15*price));
		else
			fprice=price;
	}
	else if(ptype==3)
	{
		price=(qty*5);
		if(qty>=10000)
			fprice=(price-(0.02*price));
		else
			fprice=price;
	}
		else if(ptype==4)
	{
		price=(qty*100);
		if(qty>=10000)
			fprice=(price-(0.05*price));
		else
			fprice=price;
	}
	printf("\n Final price to be paid is : %f\n",fprice);
	return 0;
}
