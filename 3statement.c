#include <stdio.h>
int main()
{
    int marks;
    printf("please enter the marks\n");
    scanf("%d", &marks);
    printf("you have enterd the %d as your marks\n", marks);
    if (marks>=87 && marks<=100)
    {
        printf("you got distinction");/* code */
    }
    else if(marks>=65 && marks<=87)
    {
        printf("you got first clas");
    }
    else if(marks>=40 && marks<=65)
    {
        printf("you have just pased");
    }
    else{
        printf("you failed the exam");
    }
    return 0;
}