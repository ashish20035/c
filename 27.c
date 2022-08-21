#include<stdio.h>
int main()
{
	char str[] = "Welcome to jenny's lecture" ; 
	char *ptr=str;
	printf("%c\n",*ptr);
	printf("%c\n",*(ptr++  +1));
	printf("%c\n",*((ptr-- +5)-1)+3);
	printf("%c\n",*(++ptr +10)-32);
	printf("%c\n%c\n%c\n",*ptr,*++ptr,*--ptr);
}
