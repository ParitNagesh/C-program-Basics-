#include <stdio.h>
int main()
{
     int num; 
  for(int i=0; i<10; i++)
  {
    printf("%d", &i);

    for(int j=0; j<10; j++)
    {
      printf("enter the number . press 00 for exit\n");
      scanf("%d", &num);
    
    if (num==00){
      goto end;
      }
    }
  }
  end:
  return 0;
}