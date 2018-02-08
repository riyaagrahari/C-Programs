//2)Write a program to accept an integer number between 1 and 9. write the value of the number in words.

#include<stdio.h>
int main() 
{ 
	int n; 
	printf("Enter the integer between 1 to 10\n");
	scanf("%d",&n);
	switch(n)
	 {
	case 1: 
		printf("ONE\n");
			break; 
	case 2: 
		printf("TWO\n"); 
			break; 
	case 3: 
		printf("THREE\n"); 
			break; 
	case 4: 
		printf("FOUR\n"); 
			break; 
	case 5: 
		printf("FIVE\n"); 
			break; 
	case 6:
		printf("SIX\n"); 
			break; 
	case 7: 
		printf("SEVEN\n"); 
			break; 
	case 8: 
		printf("EIGHT\n"); 
			break; 
	case 9: 
		printf("NINE\n"); 
			break;
	case 10:
		printf("TEN\n"); 
			break; 
	default:
		printf("Wrong entry\n");
}
return 0;
}
