#include <stdio.h>
#include <string.h>
#include "String_Programs_Header.h"
#define String_Func m##a##i##n()
int String_Func
{
    int choice;
    printf("1.Program to find the Length of a String without using any Function\n");
    printf("Choice-->\t");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\t\t\tYour choice was-> 1.Program to find the Length of a String without using any Function\n");
        extern char string_len[500];
        printf("Enter the String:\t");
        fflush(stdin);
        gets(string_len);
        StringLength(string_len);
        break;
    case 2:
        break;

    default:
        break;
    }
    return 0;
}
//fflush() function comes along with stdio.h header file, this function empties the keyboard buffer.
//before alphabet entered by us is scanned. The reason for this is that when scanf() is used for reading an "int"
//it collects everything till the enter key is hit as the value of the int, and leaves the enter key itself unread.
//When a char is to be scanned next, the scanf() accepts the enter key as the character entered, which certainly
//won't do if we were to exercise our choice in the switch().The fflush function ensures that the enter key
//is flushed out before we scanned our input.
