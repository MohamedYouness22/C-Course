#include <stdio.h>

int main(void)
{
   int num,x=0;
   printf("Enter a number:");
   scanf("%d",&num);

   while(x<13)
   {
    printf("%d * %d = %d \n",num,x,(num*x));
    x++;
   }


   return 0;
}

 
