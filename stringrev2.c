#include<stdio.h>
#include<string.h>
int main()
{
	char ch;
	char s[28];
	int i, len;
	printf("Enter the string : ");
	gets(s);
	len=strlen(s);
	printf("Length of the string is %d\n",len);
	for(i=0;i<len/2;i++)
	{
		ch=s[i];
		s[i]=s[len-1-i];
		s[len-1-i]=ch;
	}
	printf("%s",s);
}
