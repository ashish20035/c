// WAP to read an array of 10 integers and count the total no of odd and even integers
#include<stdio.h>
int main()
{
	int a[10],i;
	int even=0 ,odd=0;
	printf("Enter the array element = ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
			even=even+1;		
		else
			odd=odd+1;
	}
	printf("Even element are %d\n",even);
	printf("odd element are %d",odd);
}
