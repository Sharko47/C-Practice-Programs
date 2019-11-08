#include<stdio.h>
int main(){
    int number,i = 1,result;
    printf("Enter the number\n");
    scanf("%d",&number);
    do
    {
        /* code */
        result = number * i;
        printf("\"%d * %d = %d\"\n",number,i,result);
        i++;

    } while (i<=10);
    
    return 0;
}