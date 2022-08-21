#include<stdio.h>
#include<string.h>
int main()
{
	int count=0 ,i=0;
	char name[34];
	printf("Enter the name\n ");
	gets(name);
	//puts(name);
	while(name[i]!='\0')
	{
		count ++;
		i ++;
	}
	printf("Length of string is %d",count);
}
