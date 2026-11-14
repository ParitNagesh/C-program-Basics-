#include <stdio.h>
char main()
{
   char i,a;
   printf("enter the subject passed (maths-m , science-s): ");
   scanf("%c %c", &i , &a);

   if (i=='m' && a=='s')
   {
    printf("you got 50 rupees");
   }
   
   else if (i=='m' ^ a=='s')
   {
    printf("you got 25 rupees");
   }
   return 0;
}

    