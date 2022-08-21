//  Adding two string or concatnate two string

#include<stdio.h>
#include<string.h>
int main()
{
	int len1,len2,i;
	char str1[28] , str2[18];
	printf("Enter the first string = ");
	gets(str1);
	printf("Enter the second string = ");
	gets(str2);
	len1=strlen(str1);
	len2=strlen(str2);
	printf("Length of the str1 is %d\n",len1);
	printf("Length of the str2 is %d\n",len2);
	for(i=0;i<=len2;i++)
	{
		str1[len1+i] = str2[i];
	}
	printf("%s ",str1);
}
