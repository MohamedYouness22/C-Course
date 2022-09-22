#include <stdio.h>
#include <string.h>


typedef unsigned char u8_t;
typedef unsigned long int u32_t;
typedef unsigned short int u16_t;


typedef struct 
{
    u8_t emplyee_id;
    u32_t emplyee_salary;
    u8_t emplyee_name[30];
}emplyee_t;

emplyee_t emplyee1={1,2000,"ahmed"}, emplyee2={2,3000,"moahemed"};

void printstruct(emplyee_t localstr_emp ,u8_t emplyee_idx);


int main(void)
{
    printstruct(emplyee1,1);
return 0;
}


void printstruct(emplyee_t localstr_emp,u8_t emplyee_idx)
{

printf("Emplyee %d data(id,salary,name): {%d %d %s}\n",emplyee_idx,localstr_emp.emplyee_id,localstr_emp.emplyee_salary ,localstr_emp.emplyee_name );


return;
}