#include<stdio.h>
#include<string.h>
int main()
{
	char ch;
	char s[28];
	int i=0, len;
	printf("Enter the string : ");
	gets(s);
	strrev(s);
	printf("%s",s);
}
