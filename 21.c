#include<Stdio.h>
int main()
{
	int num;
	printf("Enter your marks = ");
	scanf("%d",&num);
	if(num<=100 && num>=90)
	{
		printf("you get A grade");
	}
	else if(num<90 && num>=80)
	{
		printf("You get B grade");
	}
	else if(num<80 && num>=70)
	{
		printf("you get C grade");
	}
	else if(num<70 && num>=60)
	{
		printf("you get D grade");
	}
	else if(num<60 && num>=50)
	{
		printf("you get E grade");
	}
	else if(num<50 && num>=40)
	{
		printf("you get F grade");
	}
	else if (num<40 && num>=30)
	{
		printf("you get G grade");
	}
	else
	{
		printf(" Fail ");
	}
	return 0;
	
}
