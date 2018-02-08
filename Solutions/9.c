/*9)
For each Product Type, the Unit price, The Threshold Quantity for discount,andthe percentage discount are given as follows.
     --------------------------------------------------------------------------------------------------------------------
       Product Type     Unit Price       Threshold Quantity            % discount
   ----------------------------------------------------------------------------------------------------------------------   
          P1               10			5000			 10
          p2               25			10000			 15
          P3               5                                                     10000 		                   2
          P4               100                  		 1000		                    5
  ------------------------------------------------------------------------------------------------------------------------
Write a program that accepts the producttype and quantity purchased by the user and calculate the amount to be paid.
*/
#include<stdio.h> 
void main() 
{ 
	int ptype; 
	int qty; 
	float price,discount,fprice; 

	printf("Enter product type (1 for p1,2 for p2, 3 for p3,4 for p4) : "); 
	scanf("%d", &ptype); 
	printf("Enter qty : "); 
	scanf("%d", &qty);
 
	if(ptype==1) 
	{
		( price=(qty*10)); 
		if(qty>=5000) 
			fprice= (price-(0.10*price)); 
		else 
			fprice=price; 
	} 
	else if(ptype==2) 
	{ 
		price=(qty*25); 
		if(qty>=10000) 
			fprice= (price-(0.15*price)); 
		else 
			fprice=price;
	}
	else if(ptype==2) 
	{ 
		price=(qty*25); 
		if(qty>=10000) 
			fprice= (price-(0.15*price)); 
		else 
			fprice=price; 
	}
	else if(ptype==3) 
	{
		price=(qty*5); 
		if(qty>=10000) 
			fprice= (price-(0.02*price)); 
		else 
			fprice=price; 
	}
	else if(ptype==4) 
	{ 
		price=(qty*100); 
		if(qty>=10000) 
			fprice= (price-(0.05*price)); 
		else 
			fprice=price; 
	}
	printf("\n Final price to be paid is : %f",fprice);  
}
