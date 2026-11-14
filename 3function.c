#include <stdio.h>
int takenumber()
{
    int i;
    printf("enter the number\n");
    scanf("%d", &i);
    return i;
}
int main()
{
   int c;
    c = takenumber();
    printf("the number entered is %d\n",c);
    return 0;
}