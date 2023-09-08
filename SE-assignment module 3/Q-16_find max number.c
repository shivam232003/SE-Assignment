#include<stdio.h>
int main()
{
	int number[100],i,n,j;
	printf("enter no. of elements:\n");
	scanf("%d",&n);
	printf("enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
	}
	for(i=0;i<n;i++)
	{
		
	
	for(j=1;j<n;j++)
	{
		if(number[i]<number[j])
		{
			number[i]=number[j];
		}
	}
	}
	
		printf("%d is grester",number[0]);

		return 0;
}

