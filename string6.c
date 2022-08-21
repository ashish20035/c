//  Adding two string or concatnate two string

#include<stdio.h>
#include<string.h>
int main()
{
	char str1[28] , str2[18];
	printf("Enter the first string = ");
	gets(str1);
	printf("Enter the second string = ");
	gets(str2);
	strcat(str1,str2);
	printf("%s ",str1);
}
