#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("Enter the string = ");
	gets(str);
	printf("Reverse string are :\n");
	strrev(str);
	puts(str);
	
}
