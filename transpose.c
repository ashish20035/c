#include<stdio.h>
int main()
{
	int a[2][3],i,j;
	printf("Enter the array element =\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		   scanf("%d",&a[i][j]);
	    }
	}
	printf("Transpose element are :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]);
		}
	}
	printf("\n");

}
