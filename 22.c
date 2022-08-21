// Wap to check the number is palindrome or not

#include<stdio.h>
int main()
{
	int n,r,s=0,c;
	printf("Enter the first number : ");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		r=n%10;
		s=r+(s*10);
		n=n/10;
	}
	if(c==s)
	{
		printf("Palindrome number");
	}
	else
	{
		printf(" Not Palindrome number");
	}
	
}
