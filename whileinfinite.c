#include <stdio.h>


int main(void)
{
int ans;
printf("5*6=");
scanf("%d",&ans);


while(1)
    {

        if(ans==30)
        {
             printf("Correct answer");
             break;
        }
        else{
            printf("Incorrect answer");
            break;
        }
        
    }
   
    return 0;
}
