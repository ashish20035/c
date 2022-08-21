#include<stdio.h>
int main()
{
	FILE *fp=NULL;
	char str;
	fp=fopen("abr.txt","r");
	while(str!=EOF)
	{
		str=fgetc(fp);
		printf("%c",str);
	}
	return 0;
}
