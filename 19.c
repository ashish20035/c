// WAP to find the HCF(GCD) and lCM Of two given number
#include<stdio.h>
int main()
{
	int n1,n2,a,b,HCF,LCM;
	printf("Enter the first number : ");
	scanf("%d",&n1);
	printf("Enter the second number : ");
	scanf("%d",&n2);
	a=n1;
	b=n2;
	while(n1!=n2)
	{
		if(n1>n2)
		{
			n1=n1-n2;
		}
		else
		{
			n2=n2-n1;
		}
	}
	printf("HCF is %d\n",n2);
	HCF=n2;
	LCM=(a*b)/HCF;
	printf("LCM is %d",LCM);
	
}
