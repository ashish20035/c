#include<stdio.h>
#include<string.h>
int main()
{
	char a[28];
	int count=0,i;
	printf("Enter the name = ");
	gets(a);
	count=strlen(a);
    printf("%d",count);
	printf("\nReverse name are = ");
	for(i=count-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
}
