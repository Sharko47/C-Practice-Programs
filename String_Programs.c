#include<stdio.h>
#include<string.h>
#include "String_Programs_Header.h"
#define String_Func m##a##i##n()
int String_Func
{
    int choice;
    printf("1.Program to find the Length of a String without using any Function\n");
    scanf("%d",&choice);
    if(choice == 1){
        printf("\t\t\tYour choice was-> 1.Program to find the Length of a String without using any Function\n");
        extern char string_len[500];
        printf("Enter the String:\t");
        scanf("%s",string_len);
        StringLength(string_len);
    }
    return 0;
}
