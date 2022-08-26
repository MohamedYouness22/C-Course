#include <stdio.h>

void swap(int*ptr1,int*ptr2);


int main(void)
{
    int x=10;
    int y=20;

    swap(&x,&y);
    printf("x is %d\ny is %d",x,y);

    return 0;
}

void swap(int*ptr1,int*ptr2)
{
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    return;
}