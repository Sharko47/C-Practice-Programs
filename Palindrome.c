#include<stdio.h>
#include<string.h>
int main(){
    int number,sum = 0,temp,remainder;
    printf("Enter the number\n");
    scanf("%d",&number);
    temp = number;
    while (number>0)
    {
        /* code */
        //12321
        remainder = number % 10;
        sum = (sum * 10) + remainder;
        number = number/10;
    }
    if(sum == temp){
        printf("%d is a Palindrome Number.",temp);
    }else{
        printf("%d is not a Palindrome Number.",temp);
    }
    return 0;
}