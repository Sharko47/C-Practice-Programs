#include<stdio.h>
int main(int argc, char const *argv[])
{
    //Input = ab231156
    //Program to Find occurence of a number from 0 to 9 and Sum all the number in a String.
    char str[50];
    int i = 0;
    static int occurence_counter[10],sum_of_number_string;
    printf("Enter the String:\t");
    fgets(str,50,stdin);
    while(i[str] != '\0'){
        switch (i[str])
        {
        case 48:
        occurence_counter[0] = occurence_counter[0] + 1;
        break;
        case 49:
        occurence_counter[1] = occurence_counter[1] + 1;
        break;
        case 50:
        occurence_counter[2] = occurence_counter[2] + 1;
        break;
        case 51:
        occurence_counter[3] = occurence_counter[3] + 1;
        break;
        case 52:
        occurence_counter[4] = occurence_counter[4] + 1;
        break;
        case 53:
        occurence_counter[5] = occurence_counter[5] + 1;
        break;
        case 54:
        occurence_counter[6] = occurence_counter[6] + 1;
        break;
        case 55:
        occurence_counter[7] = occurence_counter[7] + 1;
        break;
        case 56:
        occurence_counter[8] = occurence_counter[8] + 1;
        break;
        case 57:
        occurence_counter[9] = occurence_counter[9] + 1;
        break;
        }
        if((str[i] >= 48 && str[i] <=57)){
            sum_of_number_string = sum_of_number_string + (str[i] - 48);
        }
        i++;
    }
    for(i = 0;i<10;i++){
        printf("Occurence of '%d' : %d\n",i,*(occurence_counter+i));
        }
        printf("Sum of number in a String: %d",sum_of_number_string);
    return 0;
}
