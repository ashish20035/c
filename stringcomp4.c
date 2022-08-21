// compare two string
#include<stdio.h>
#include<string.h>
int main()
{
	//int count=0;
	int result;
	char str1[10],str2[10];
	printf("Enter the str1 = ");
	gets(str1);
	printf("Enter the str2 = ");
	gets(str2);
	result=strcmp(str1,str2);
	printf("%d\n",result);
	
}
	
