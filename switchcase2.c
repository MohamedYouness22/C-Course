#include <stdio.h>

int main(void)
{
   int a,b,c,d,e;
   int x;
   printf("please enter 10 numbers ");
    scanf("%d %d %d %d %d ", &a ,&b ,&c ,&d ,&e  );
 
    printf("please enter a search number ");
    scanf("%d",&x);

    switch(x)
    {
    case a:
        printf("index 1 ");
        break;
    case b:
        printf("index 2 ");
        break;
    case c:
        printf("index 3 ");
        break;
    case d:
        printf("index 4 ");
        break;
    case e:
        printf("index 5 ");
        break;
    
    default:
        break;
    }
}


