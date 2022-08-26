#include <stdio.h>


int main(void)
{
int num,fac=1,x=1;
printf("Enter a Number:");
scanf("%d",&num);

    do
    {
        fac=fac*x;
        x++;
    } while (x<=num);
    printf("the factorial of %d is %d",num ,fac);
    

   return 0;
}