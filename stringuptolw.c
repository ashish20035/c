// string converted into upper to lower
#include<stdio.h>
#include<string.h>
int main() 
{
	int len,i;
	char s[28];
	printf("Enter the string : ");
	gets(s);
	len=strlen(s);
	printf("%d\n",len);
	for(i=0;i<len;i++)
	{
		if(s[i]>='A' && s[i]<='Z')
		{
			s[i]=s[i]+32;
		}
	}
	printf("%s",s);
	
}
