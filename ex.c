#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{   
    //Program to print String length and number of digits in a number without using any builtin function.
    //%n is used to find the number of characters used.
    int n,len,str_len;
    char str[100];
    scanf("%d%n\n",&n,&len);
    scanf("%s%n",str,&str_len);
    printf("Number of Digits in '%d' : %d\n",n,len);
    printf("Length of '%s' : %d",str,str_len);
    return 0;
}