#include<stdio.h>
#include<string.h>
int main()
{
	int i,k=0,len1,len2;
	char str1[10],str2[10];
	printf("Enter the str1 = ");
	gets(str1);
	printf("Enter the str2 = ");
	gets(str2);
	len1=strlen(str1);
	len2=strlen(str2);
	for(i=0;i<len1;i++)
	{
		if(str1[i]==str2[i])
		{
			k++;
		}
	}
	if(k==len1)
	{
		printf("String are equal");
	}
	else
	{
		printf("String are equal");
	}
}
