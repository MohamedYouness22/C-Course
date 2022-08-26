#include <stdio.h>

int main(void)
{
   int a,b,c,d,e;
   int x;
   printf("please enter 5 numbers ");
    scanf("%d %d %d %d %d ", &a ,&b ,&c ,&d ,&e  );
    
    printf("please enter a search number ");
    scanf("%d",&x);

    if(x==a)
    {
        printf("index1");
    }
    else if(x==b)
    {
        printf("index2");
    }
    else if(x==c)
    {
        printf("index3");
    }
    else if(x==d)
    {
        printf("index4");
    }
    else if(x==e)
    {
        printf("index5");
    }
    else{
        printf("not valid");
    }

    return 0;
}


