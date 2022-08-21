#include<stdio.h>
int main()
{
	FILE *fp=NULL;
	//char str[45];
	fp=fopen("abr.txt","r+");
	if(fp==NULL)
	{
		printf("error");
		exit(1);
	}
	fputs("Nishi",fp);
	fclose(fp);
}

