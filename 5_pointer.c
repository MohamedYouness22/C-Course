#include <stdio.h>

int main(void)
{
int x=50,y=100,z=150;

int*pptr=&x;
int*qptr=&y;
int*rptr=&z;

printf("pointer p %d\n",*pptr);
printf("pointer q %d\n",*qptr);
printf("pointer r %d\n",*rptr);

*pptr=*qptr;
*qptr=*rptr;
*rptr=*pptr;

printf("pointer p2 %d\n",*pptr);
printf("pointer q2 %d\n",*qptr);
printf("pointer r2 %d\n",*rptr);

return 0;
}