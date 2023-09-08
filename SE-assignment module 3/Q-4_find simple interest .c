#include<stdio.h>
int main()
{
	double price,rate,interest,year;
	
	
	printf("enter price:");
	scanf("%lf",&price);
	printf("enter rate of interest:");
	scanf("%lf",&rate);
	printf("enter year:");
	scanf("%lf",&year);
	
	interest=(price*rate*year)/100;
	printf("simple interest =%lf",interest);
	    
}
