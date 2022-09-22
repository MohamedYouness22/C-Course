#include <stdio.h>

int main(){  
int arr[5]={5,4,3,2,1};
int i,x,temp;

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



    
