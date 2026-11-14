#include <stdio.h>
char main()
{
    char p,f;
    printf("enter the result\n");
    scanf("%c %c",&p,&f);
    printf("you enterd the %c as your result\n",p,f);
    if (p==f)
    {
        printf("education is key to success");
    }
    else
    {
        printf("a piece of paper cannot decide your success");
    }
    return 0;
    
}