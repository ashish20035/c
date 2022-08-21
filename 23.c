#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(n==sum)
	{
		printf("perfect number");
	}
	else
	{
		printf("Not perfect number");
	}
}
