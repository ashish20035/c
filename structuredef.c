#include<stdio.h>
typedef struct student
{
	int rollno;
	char name[12];
	float marks;	
}student;
int main()
{
	student s={5,"shruti",85.68};
	printf("%d %s %f",s.rollno,s.name,s.marks);
}
