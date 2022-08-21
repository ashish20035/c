#include<stdio.h>

struct student
{
	int rollno;
	char name[20];
	float marks;
}s3={4};
int main()
{
	struct student s1={1,"tulika",90};
	struct student s2={2,"shreya",92};
	
	printf("Info of s1");
	printf("\n %d %s %f\n",s1.rollno,s1.name,s1.marks);
	printf("Info of s2");
	printf("\n %d %s %f",s2.rollno,s2.name,s2.marks);
	printf("Info of s3");
	printf("\n %d %s %f",s3.rollno,s3.name,s3.marks);
	
}
