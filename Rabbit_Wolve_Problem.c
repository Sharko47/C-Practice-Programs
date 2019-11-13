#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int rabbit_today,wolves_today,period = 1000,R_T,W_T;
    printf("Enter the number of Rabbit & Wolves\n");
    scanf("%d %d",&rabbit_today,&wolves_today);
    float a = 0.01, b = 0.005, c = 0.00001, d = 0.01;
    register int i = 1;
    for(;i<=period;i++){
        
        R_T = (1 + a) * rabbit_today - (c * rabbit_today * wolves_today);
        W_T = (1 - b) * wolves_today + c * d * rabbit_today * wolves_today;
        if(i % 25 == 0){
            printf("After %d Day Rabbit Population = %d And Wolves Population = %d\n",i,R_T,W_T);
        }
        rabbit_today = R_T;
        wolves_today = W_T;
    }
    return 0;
}

