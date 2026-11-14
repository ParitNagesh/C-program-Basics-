#include <stdio.h>
int main()
{
    int age,marks;
    printf("enter the age\n");
    scanf("%d", &age);

    printf("enter your marks\n");
    scanf("%d", &marks);

    switch (age)
    {
        case 18:
        printf("your age is 18\n");
        switch (marks)
       {
        case 79:
        printf("your marks is 79\n");
       }
       break;
       
       case 19:
       printf("your age is 19\n");
       switch (marks)
       {
        case 89:
        printf("your marks is 89\n");
       }
       break;

       case 20:
       printf("your age is 20\n");
       switch (marks)
       {
        case 99:
        printf("your marks is 99\n");
       }
       break;

       default:
       printf("age is not 18,19 and 20\n");
       printf("marks are not 79,89 and 99\n");
       
    }
    return 0;

}