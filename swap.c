#include <stdio.h>

void swap(void);

int main(void)
{
    swap();
    return 0;
}

void swap(void)
{
    int x=10,y=20,temp;
    temp=x;
    x=y;
    y=temp;
    printf("x is %d\n",x);
    printf("y is %d",y);
    return ;
}