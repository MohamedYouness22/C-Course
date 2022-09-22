#include <stdio.h>

typedef unsigned char u8_t;
typedef unsigned long int u32_t;
typedef unsigned short int u16_t;

u8_t queue_arr[5];
u8_t head_pointer=0;
u8_t current_pointer=0;


void queue_insert(u8_t data);
void quere_getdata(u8_t*rec_data);

int main (void)
{
    u8_t x;
    queue_insert(10);
    queue_insert(20);
    queue_insert(30);
    queue_insert(40);
    queue_insert(50);

    queue_insert(60);
    queue_insert(70);

    quere_getdata(&x);
    printf("the data received is:%d \n",x);
    quere_getdata(&x);
    printf("the data received is:%d \n",x);
    quere_getdata(&x);
    printf("the data received is:%d \n",x);
    quere_getdata(&x);
    printf("the data received is:%d \n",x);
    quere_getdata(&x);
    printf("the data received is:%d \n",x);

    quere_getdata(&x);
    printf("the data received is:%d \n",x);
    return 0;
}


void queue_insert(u8_t data)
{
    if(current_pointer==5)
    {
        printf("Queue is full\n");
    }
    else{
        queue_arr[current_pointer]=data;
        current_pointer++;
    }
    
return;
}


void quere_getdata(u8_t*rec_data)
{
    if((current_pointer==head_pointer)&&(head_pointer==0))
    {
        printf("Queue is empty\n");
    }
    else{
        *rec_data=queue_arr[head_pointer];
        head_pointer++;
    }

//to reset the queue
    if((current_pointer==head_pointer)&&(head_pointer!=0))
    {
        head_pointer=0;
        current_pointer=0;
    }
    return;
}