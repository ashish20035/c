#include<stdio.h> //without argument without return value
void iseven();
void isevenorodd()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n%2==0)
        printf("Even number");
    else
        printf("odd number");
}
int main()
{
    isevenorodd();
    return 0;
}
