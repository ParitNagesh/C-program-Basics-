#include <stdio.h>
int main()
{
    int i,age;

    for (i=0; i<19; i++)
    {
        printf("%d\n enter your age\n", i);
        scanf("%d", &age);

        if (age>19)
        {
            continue;
        }
        printf("you are eligible for LKG class\n");
        printf("you are eligible for LKG class\n");
    }
    return 0;
}