#include<stdio.h>
#include<string.h>
int main()
{
	int value;
	char str1[10],str2[10];
	printf("Enter the str1 = ");
	gets(str1);
	printf("Enter the str2 = ");
	gets(str2);
	value=strcmp(str1,str2);
	printf("%d\n",value);
	if(value==0)
	{
		printf("String are same");
	}
	else
	{
		printf("String are not same");
	}
	
}
	
