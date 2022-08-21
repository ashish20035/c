#include<Stdio.h>
int main()
{
	int day;
	printf("Enter the day = ");
	scanf("%d",&day);
	switch(day)
	{
		case 1 : printf("monday");
		break;
		case 2 :  printf("Tuesday");
		break;
		case 3 : printf("Wednesday");
		break;
		case 4 : printf("Thrusday");
		break;
		case 5 : printf("Friday");
		break;
		case 6 : printf("satuarday");
		break;
		case 7 : printf("sunday");
		break;
		default : printf("Error");
	}
}
