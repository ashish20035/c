#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	float marks;
};
int main()
{
	struct student s;
    printf("Enter the info of s : ");
	scanf("%d %s %f",&s.rollno,&s.name,&s.marks);
	printf("\n %d %s %f",s.rollno,s.name,s.marks);
	
}
