#include"stdio.h"
#include "typedefs.h"
#include "stdlib.h"


int main(){  
u8_t arr;
u8_t i;
u8_t x;
u8_t temp;


arr=(u8_t*)calloc(10,sizeof(u8_t));

for(i=0;i<4;i++)
    {
        for(x=0;x<(4-i);x++)
        {
            if(arr[x]>arr[x+1])
                temp = arr[x];
                arr[x] = arr[x+1];
                arr[x+1] = temp;
        }


    }

printf("Array after sorting:");
  for(x = 0; x < 5; x++)
    {
        printf("%d ",arr[x]);
    }
return 0;
}