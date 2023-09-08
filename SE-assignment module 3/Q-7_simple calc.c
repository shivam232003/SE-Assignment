#include<stdio.h>
int main()
{
	int n1,n2,c;
	printf("enter n1:");
	scanf("%d",&n1);
	printf("enter n2:");
	scanf("%d",&n2);
	
	c = n1+n2;
    printf("%d+%d = %d \n",n1,n2,c);
    c = n1-n2;
    printf("%d-%d = %d \n",n1,n2,c);
    c = n1*n2;
    printf("%d*%d = %d \n",n1,n2,c);
    c = n1/n2;
    printf("%d/%d = %d \n",n1,n2,c);
    c = n1%n2;
    printf("Remainder when a divided by b = %d \n",c);
}
