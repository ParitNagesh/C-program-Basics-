#include <stdio.h>
int main()
{
    int age;
    printf("please enter your age\n");
    scanf("%d", &age);
    printf("you have enterd %d as your age\n", age);
    if (age>=18)
    {
        printf("you are eligible for voting");
    }
    else if (age>=10)
    {
        printf("you are between the 10 and 18 age you can vote for kids");/* code */
    }
    else if (age<=10)
    {
        printf("your age is below 10 you can vote for childrens");
    }
    
    else
    {
        printf("you are not eligible for voting\n");
        printf("thank you");
    }
    
    return 0;
}
    