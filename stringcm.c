// compare two string
#include<stdio.h>
#include<string.h>
int main()
{
	int count=0,k=0;
	int result,i;
	char str1[10],str2[10];
	printf("Enter the str1 = ");
	gets(str1);
	printf("Enter the str2 = ");
	gets(str2);
	for(i=0;i<strlen(str1);i++){
	
	if(str1[i]==str2[i])
	{
		k++;
	}}
	if(k==strlen(str1)){
		printf("string is equal");
	}
	else{
		printf("string is not equal");
	}
}
