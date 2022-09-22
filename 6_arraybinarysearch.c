#include <stdio.h>

//enter array elements,sort array,use binary search to get a key(found,index or not found)
int main(void)
{
int arr[5];
int i,x,temp,key,min,max,mid;
int flag=0;

printf("Enter array elements:\n");
for(x=0;x<5;x++)
    {
        scanf("%d",&arr[x]);
    }

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

printf("Array after sorting:\n");
  for(x = 0; x < 5; x++)
    {
        printf("%d ",arr[x]);
    }
؟؟؟
//في مشكله فوق
printf("Enter value to find\n");
scanf("%d", &key);


min=0;
mid=0;
max=4;


while(min<=max)
{
    mid=(max+min)/2;
    if(arr[mid]>key)
    max=mid-1;

    else if (arr[mid]<key)
    min=mid-1;

    else if (arr[mid]==key)
    { printf("%d Found, index %d.n", key, mid+1);
    flag=1;
    break;}

    else {
        //noting
    }


}
if(flag)
{
    printf("Found, index %d",mid);

}
else {
    printf("Not found!");
}


return 0;
}
