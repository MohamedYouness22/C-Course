#include <stdio.h>

int mult=1;
int fact(int x);

int fact(int x)
{
    if (x>0)
    {
       mult= x*fact(x-1); 
    }
    else{
        
    }
    return mult;
}

int main(void)
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);


    printf("The factorial of the number %d is : %ld\n",num, fact(num));

    return 0;
}

