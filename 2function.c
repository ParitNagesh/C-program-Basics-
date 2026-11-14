#include <stdio.h>
void printstar(int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%c\n", '*');
    }
}
int main()
{
  printstar(10);
  return 0;
}