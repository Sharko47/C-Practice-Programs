#include<stdio.h>
#include<stdlib.h>
int main(){
    unsigned int num,i=2,flag=0;
    printf("Enter the Number\n");
    scanf("%d",&num);
    while(i<num){
        /* code */
        if(num % i==0){
            printf("The number %d is not a Prime Number\n",num);
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 0)
    {
        printf("The number %d is Prime Number\n",num);
    }
    return 0;
}