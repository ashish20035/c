// WAP to read two arrays of size and store sum of these array in third array
#include<stdio.h>
int main()
{
	int arr1[5], arr2[5], sumarr[5],i;
	printf("Enter the first array element = ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter the second array = ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr2[i]);
	}
	for(i=0;i<5;i++)
	{ 
		sumarr[i] = arr1[i]+arr2[i];
		printf("%d, ",sumarr[i]);
	}
}
