#include<stdio.h>
int main()
{
	int num;
	printf("Enter the case = ");
	scanf("%d",&num);
	switch(num)
	{
		case 1:printf("The value is 6");
		break;
		case 2:printf("The value is 8");
		break;
		case 3:printf("The value is 5");
		break;
		case 4:printf("The value is 9");
		break;
		default : printf("Out of range");
	}
	return 0;
}
