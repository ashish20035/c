#include<stdio.h>
//#pragma pack(1)
struct abc
{
	char t;
	char m;
	int a;
};
int main()
{
	struct abc s;
	printf("size of s is %d",sizeof(s));
}
