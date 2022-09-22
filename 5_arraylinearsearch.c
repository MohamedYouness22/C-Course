#include <stdio.h>


int main(){  
int arr[5];
int x,key,i;

printf("Please enter 5 numbers:\n");

for(x=0;x<5;x++)
    {
        scanf("%d",&arr[x]);
    }

printf("Enter a key value to search: ");
scanf("%d",&key);

for(i=0;i<5;i++)
    {
        if(key==arr[i])
        {
            printf("Found!,index %d",i);
            break;
        }
      
    }
 if (i == 5)
    printf("%d isn't present in the array.\n", key);
return 0;
}