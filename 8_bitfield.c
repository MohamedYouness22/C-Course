#include <stdio.h>
#include <string.h>


typedef unsigned char u8_t;
typedef unsigned long int u32_t;
typedef unsigned short int u16_t;


typedef struct 
{
    u8_t math:1;
    u8_t english:1;
    u8_t physics:1;
    u8_t chemistry:1;
}subject_t;

subject_t arr[3]={ {1,0,1,0} ,
 {1,0,1,0},
 {0,0,1,1}
};


int main(void)
{
    if(arr[1].math==1)
    {
        printf("Math pass\n");
    }
    else("Math failed\n");}??
    int idx;
    printf("please enter student index:");
    scanf("%d",&idx);

     struct student arr[5];
    



}