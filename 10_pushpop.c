#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef unsigned char u8_t;
typedef unsigned long int u32_t;
typedef unsigned short int u16_t;

u8_t stack_pointer=0;
u8_t stack_arr[100];


void stack_push(u8_t data);
void stack_pop(u8_t*pop_data);

int main(void)
{
    u8_t x;
   stack_push(10);
   stack_push(20);
   stack_push(30);
   stack_push(40);
   stack_push(50);
   stack_push(60);

   stack_pop(&x);
   printf("The poped data %d\n",x);
     stack_pop(&x);
   printf("The poped data %d\n",x);
     stack_pop(&x);
   printf("The poped data %d\n",x);
     stack_pop(&x);
   printf("The poped data %d\n",x);
     stack_pop(&x);
   printf("The poped data %d\n",x);

    return 0;
}

void stack_push(u8_t data)
{
    if(stack_pointer == 100)
    {
        printf("Stack is full");
    }
    else{
        stack_arr[stack_pointer]=data;
        stack_pointer++;
    }
    
    
    return;
}

void stack_pop(u8_t*pop_data)
{

    
      if(stack_pointer==0)
      {
             printf("The stack is empty");
      }
      else{
            stack_pointer--;
            printf("The poped data is : %d\n",stack_arr[stack_pointer]);
            *pop_data=stack_arr[stack_pointer];
      }
      
      return;
}