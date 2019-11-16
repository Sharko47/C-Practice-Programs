#include <stdio.h>
#include <string.h>
#include "Number_ProgramsHeader.h"
int main(int argc, char const *argv[])
{
    /* code */
    int choice;
    printf("Choose Any One:\n1.Program to find a length of a Number.\n2.Program to find a number is a Disarium number of not.\n");
    printf("3.Program to Check Happy Number.\n4.Program to print all Pronic numbers between 1 To N.\n5.Program to Check Deficient Number.\n");
    printf("6.Program to Check Twisted Prime Number.\n7.Program to find sum of all digits without using Modulus operator.\n");
    printf("Choice->\t");
    scanf("%d", &choice);
    if (choice <= 0)
    {
        printf("Sorry!! Choice cannot be Negative or '0'.\n");
    }
    else if (choice == 1)
    {
        printf("\t\t\tYour Choice was:1.Program to find a length of a Number.\n");
        extern int number;
        printf("Enter the Number:\t");
        scanf("%d", &number);
        Find_Numbers_Length(number);
    }
    else if (choice == 2)
    {
        /* code */
        printf("\t\t\tYour Choice was:2.Program to find a number is a Disarium number of not.\n");
        extern int disarium_number;
        printf("Enter the Number to Check if it's Disarium Number or Not:\t");
        scanf("%d", &disarium_number);
        if (disarium_number < 0)
        {
            printf("You've entered a negative number!!\n");
        }
        else
        {
            Check_Disarium_Number(disarium_number);
        }
    }
    else if (choice == 3)
    {
        /* code */
        printf("\t\t\tYour Choice was:3.Program to Check Happy Number.\n");
        extern int happy_number;
        printf("Enter the Number:\t");
        scanf("%d", &happy_number);
        Check_Happy_Number(number);
    }
    else if (choice == 4)
    {
        printf("\t\t\tYour Choice was:4.Program to print all Pronic numbers between 1 To N.\n");
        extern int pronic_range;
        printf("Enter the Number to Print all Pronic Numbers upto to \"Number\":\t");
        scanf("%d", &pronic_range);
        Print_Pronic_Numbers(pronic_range);
    }
    else if (choice == 5)
    {
        printf("\t\t\tYour Choice was:5.Program to Check Deficient Number.\n");
        extern int deficient_number;
        printf("Enter the Number:\t");
        scanf("%d", &deficient_number);
        Check_Deficient_Number(deficient_number);
    }
    else if (choice == 6)
    {
        printf("\t\t\tYour Choice was:6.Program to Check Twisted Prime Number.\n");
        extern int twisted_Prime_Number;
        printf("Enter the Number:\t");
        scanf("%d",&twisted_Prime_Number);
        Check_Twisted_Prime_Number(twisted_Prime_Number);
    }
    else if (choice == 7)
    {
        printf("\t\t\tYour Choice was:7.Program to find sum of all digits without using Modulus operator.\n");
        extern char number_string[1000];
        printf("Enter the Number:\t");
        scanf("%s",number_string);
        Sum_All_Digits(number_string);
    }
    else if (choice >7)
    {
        printf("Please enter choice in a specified range.\n");
    }
    return 0;
}
