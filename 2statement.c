#include <stdio.h>
int main()
{
    int marks;
    printf("enter your marks\n");
    scanf("%d",&marks);
    printf("you have enterd %d as your marks\n", marks);
    if (marks>=87)
    {
        printf("you got first class");
    }
    else if (marks>=75)
    {
        printf("you got distinction");
    }
    else if (marks>=40)
    {
        printf("you have just passed");
    }
    else
    {
        printf("you have failed in your exam");
    }
    return 0;
    
}