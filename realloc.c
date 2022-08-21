#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*ptr,*ptr1;
	printf("Enter the total number of value : ");
	scanf("%d",&n);
	
	ptr=(int*)calloc(n,sizeof(int));
	
	printf("Enter the value = ");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("update the size of n = ");
	scanf("%d",&n);
	ptr1=(int*)realloc(ptr,n*sizeof(int));
	printf("previous address=%d,new address=%d\n",ptr,ptr1);
	printf("The values are = ");
	for(i=0;i<n;i++)
	{
		printf("%d",*(ptr+i));
	}
	free(ptr1);
}
