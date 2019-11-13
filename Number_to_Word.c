#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    char number_in_words[10][100] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int number, f_num,temp_num,temp1,rev=0;
    printf("Enter the Number:\t");
    scanf("%d", &number);
    temp_num = number;
    if(temp_num>=10){//Reversing Entered Number to Print Proper String.
    while(temp_num>0){
        temp1 = temp_num%10;
        rev = rev * 10 + temp1;
        temp_num = temp_num/10;
    }
    }
    while (rev > 0)
    {
        f_num = rev%10;
        rev = rev/10;
        switch (f_num)
        {
        case 0:
            printf("%s ", number_in_words[0]);
            break;
        case 1:
            printf("%s ", number_in_words[1]);
            break;
        case 2:
            printf("%s ", number_in_words[2]);
            break;
        case 3:
            printf("%s ", number_in_words[3]);
            break;
        case 4:
            printf("%s ", number_in_words[4]);
            break;
        case 5:
            printf("%s ", number_in_words[5]);
            break;
        case 6:
            printf("%s ", number_in_words[6]);
            break;
        case 7:
            printf("%s ", number_in_words[7]);
            break;
        case 8:
            printf("%s ", number_in_words[8]);
            break;
        case 9:
            printf("%s ", number_in_words[9]);
            break;
        default:
        printf("Invalid Number\n");
            break;
        }
    }
    return 0;
}
