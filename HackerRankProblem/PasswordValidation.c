#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define Upper(x) (x>=65 && x<=90)
#define Lower(x) (x>=97 && x<=122)
#define digit(x) (x>=48 && x<=57)
#define special(x) ((x>=33 && x<=47) || (x>=58 && x<=64) || (x>=91 && x<=96) || (x>=123 && x<=126))
int main(int argc, char const *argv[])
{
    //Program to Validate Password.
    char password[30];
    gets(password);
    int len = strlen(password),i;
    static int upper_count,lower_count,digit_count,special_count;
    if(len<8){
        printf("Mininum password length 8 is required.");
        exit(1);
    }
    for(i = 0;i<=len;i++){
        int temp = password[i];
        if(Upper(temp)){
            upper_count++;
        }
        if(Lower(temp)){
            lower_count++;
        }
        if(digit(temp)){
            digit_count++;
        }
        if(special(temp)){
            special_count++;
        }
    }
    if(upper_count>0 && lower_count>0 && digit_count>0 && special_count>0){
        printf("Valid Password");
    }else
    {
        printf("Invalid Password");
    }
    return 0;
}