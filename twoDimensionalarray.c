#include "stdio.h"
#include "typedefs.h"

u32_t arr[3][2]={
                    {10,20},
                    {30,40},
                    {50,60}
                };
u8_t i,j;
u32_t *ptr=arr;
int main(void)
{
    printf("the size of array:%d",sizeof(arr));

    **arr=200;
    *(ptr+1)=300;

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",*(*(arr+i)+j));
        }
        printf("\n");
    }
}
