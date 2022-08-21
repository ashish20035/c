#include<stdio.h>
int raj(int *x,int *y)
{
	*x=24;
	*y=12;
	printf("x=%d,y=%d",*x,*y);
	
}
int main()
{
	int x=12,y=24;
	raj(&x,&y);
	
}
