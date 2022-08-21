#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	float marks;
};
int main()
{
	struct student s1={1,"satya",89};
	struct student *ptr = &s1;
	printf("info for s1");
	printf("\n %d %s %f\n",(*ptr).rollno,(*ptr).name,ptr->marks);
	
}
