#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the Number: \n");
    scanf("%d",&n);
    while(n!=0){
        /* code */
        sum = sum + (n % 10);
        n = n/10;
    }
    printf("The Sum of All Digits : %d\n",sum);
    return 0;
}