#include<stdio.h>
#include<string.h>
int main()
{
	char s[28];
	int i=0, len;
	printf("Enter the string : ");
	gets(s);
	len=strlen(s);
	printf("Length of the string is %d\n",len);
	for(i=len-1;i>=0;i--)
	{
		printf("%c",s[i]);
	}
	
}
