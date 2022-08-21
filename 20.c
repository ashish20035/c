#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*ptr;
	printf("Enter the total number of value : ");
	scanf("%d",&n);
	
	ptr=(int*)malloc(n*sizeof(int));
	
	printf("Enter the value = ");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("The enter values are = ");
	for(i=0;i<n;i++)
	{
		printf("%d",*(ptr+i));
	}
	free(ptr);
}
