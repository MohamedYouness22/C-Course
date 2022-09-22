#include <stdio.h>


//برنامج بيدخل 10 ارقام يطبع المجموع والافريج والارقام بالعكس
int main(){  
int arr[10];
int x,rev;
int sum=0,avg=0;
printf("Please enter 10 numbers:\n");

for(x=0;x<10;x++)
    {
        scanf("%d",&arr[x]);
        sum=sum+arr[x];

    }
    
    for(x=9;x>=0;x--)
    {
        printf("%d  ",arr[x]);
    }
avg=sum/10;
printf("\n sum is %d avg is %d",sum ,avg);


return 0;
}



    
