#include <stdio.h>
#include <string.h>


typedef unsigned char u8_t;
typedef unsigned long int u32_t;
typedef unsigned short int u_t;


struct emplyee
{
    u8_t emplyee_id;
    u32_t emplyee_salary;
    u8_t emplyee_name[30];
};


int main(void)
{
struct emplyee emplyee1={1,2000,"ahmed"};
struct emplyee emplyee2={2,3000,"moahemed"};
struct emplyee emplyee3={3,4000,"omar"};

printf("Emplyee1 data(id,salary,name): {%d %d %s}\n",emplyee1.emplyee_id,emplyee1.emplyee_salary ,emplyee1.emplyee_name );
printf("Emplyee2 data(id,salary,name): {%d %d %s}\n",emplyee2.emplyee_id,emplyee2.emplyee_salary ,emplyee2.emplyee_name );
printf("Emplyee3 data(id,salary,name): {%d %d %s}",emplyee3.emplyee_id,emplyee3.emplyee_salary ,emplyee3.emplyee_name );

return 0;
}