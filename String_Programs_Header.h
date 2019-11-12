#include<stdio.h>
#include<string.h>
char string_len[500];//Global Variable to find Length of a String without using any Function.

void StringLength(){
    int count = 0;
    while(string_len[count]!= '\0'){
        count++;
    }
    printf("Length of a String = %d",count);
}