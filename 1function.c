#include <stdio.h>
int sum(int a ,int b)
{
  return a + b;
}
int main()
{
    int a=5,b=6,c;
    c=sum(a , b);
    printf("the sum is %d\n", c);
    return 0;
}