#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef unsigned char u8_t;
typedef unsigned long int u32_t;
typedef unsigned short int u16_t;


int main()
{
    
    u8_t i;
    u8_t avg;
    u8_t *ptr;
    u8_t sum = 0;


    ptr = (u8_t *)malloc(10 * sizeof(u8_t));

   
    for (i = 0; i < 10; i++)
    {
       
        printf("Enter element %d : ", (i + 1));
        scanf("%d",&ptr[i]);

        sum = sum+ ptr[i];

    }
    avg=sum/i;

    printf("sum is %d \n", sum);
    printf("avreage is %d \n", avg);


    return 0;
}

