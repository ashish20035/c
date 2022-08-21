#include<stdio.h>
union abc
{
	int a;
	char b;
	float c;
};
int main()
{
	union abc u;
	union abc *ptr=&u;
	u.a=1;
	u.b=4;
	u.c=6.8;
	printf("a=%d\n",ptr->a);
	printf("b=%c\n",ptr->b);
	printf("c=%f",(*ptr).c);
}
