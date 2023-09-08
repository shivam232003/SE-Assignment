#include <stdio.h>

int main() {
    int num,i,evenCount=0,oddCount=0,evenSum=0,oddSum=0;

    printf("Enter 10 numbers:\n");

    for (i=1;i<=10;i++) 
	{
        printf("Enter number %d: ",i) ;
        scanf("%d", &num);
        
        if (num%2==0) 
		{
            evenCount++;
            evenSum+=num;
        } else {
            oddCount++;
            oddSum += num;
        }
    }


    printf("Number of even numbers entered: %d\n", evenCount);
    printf("Number of odd numbers entered: %d\n", oddCount);

    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

    return 0;
}

//WAP to print table up to given numbers

#include<stdio.h>
int main()
{

	int nom,i;
	printf("enter a number:");
	scanf("%d",&i);
{
	
	for(nom=1;nom<=10;nom++)
	
	printf("\n%d x %d= %d",i,nom,nom*i);
	
	
}
	
}

