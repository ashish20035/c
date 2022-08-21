#include<stdio.h>
#include<string.h>
int main()
{
	int count=0;
	char name[40];
	printf("Enter the name = ");
	gets(name);
	puts(name);
	count=strlen(name);
	printf("Length of string is %d",count);
	
}
