#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{   /*
    //Given Comma Separated digits, print the number represented by the digits.
    //Constraint : If number contains even number of negative integers then print number without negative sign.
                   Else print number with negative sign.
    Input: 1-> 0,6,9,8
    Output: 698
    Input: 2-> 9,-5,65
    Output: 9-565
    Input: 3-> 0,-9,98,8,-6
    Output: 99886
    */
    char input[50];
    gets(input);
    int len = strlen(input), i;
    static int temp,neg_c;
    for(i =0;i<len;i++){
        if(input[i] == 45){
            neg_c++;
        }
    }
    for (i = 0; i<len; i++)
    {
        temp = input[i] - 48;
        if (input[i] == 44 || (temp==0 && i==0))
        {
          continue;
        }else if(input[i] == 45){
            if(neg_c%2!=0){
                printf("%c",input[i]);
            }
            continue;
        }
        printf("%d",temp);
    }
}