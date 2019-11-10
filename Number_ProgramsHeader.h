#include <stdio.h>
#include <math.h>
#include<stdbool.h>
#define Power(num) (int)powf(num, 2)

int disarium_number; //Global Variable for Checking if a number is Disarium Number of not.

int number; //Global Variable for Find a length of any received number.

int happy_number; //Global Variable for Checking if a number is a Happy Number or not.

int pronic_range; //Global Variable for Printing 1 To N Pronic Numbers.

int deficient_number; //Global Variable for Checking if a number is a Deficient number or not.

int twisted_Prime_Number; //Global Variable for Checking if a number is a Twisted Prime Number or not.

void Check_Disarium_Number()
{
    int count = 0, counter, rem, final_result = 0;
    counter = disarium_number;
    while (counter > 0)
    { //Findind the length of a number.
        counter = counter / 10;
        ++count;
    }
    printf("Number of Digits = %d\n", count);
    int disarium_copy = disarium_number;
    while (disarium_number > 0)
    { //Calculating the sum of digits powered with their respective position.
        rem = disarium_number % 10;
        final_result = final_result + (int)powf(rem, count);
        disarium_number = disarium_number / 10;
        count--;
    }
    if (final_result == disarium_copy)
    { //Condition to check, if a final result is same as a received number then it's a Disarium Number.
        printf("%d is a Disarium Number\n", disarium_copy);
    }
    else
    {
        /* code */
        printf("%d is not a Disarium Number\n", disarium_copy);
    }
}

void Find_Numbers_Length()
{
    int length = 0;
    while (number > 0)
    {
        number = number / 10;
        ++length;
    }
    printf("Length of a Number = %d\n", length);
}

int IsHappyNumber(int temp_num)
{ //Function of calculating the sum of Happy Number.
    int remain, sum = 0;
    while (temp_num > 0)
    {
        remain = temp_num % 10;
        sum = sum + Power(remain); //Power is a Macro Function which is declared on the top.
        temp_num = temp_num / 10;
    }
    return sum;
}

void Check_Happy_Number()
{
    int number_copy;
    number_copy = happy_number;
    while (number_copy != 1 && number_copy != 4)
    {
        number_copy = IsHappyNumber(number_copy); //Calling a Function to get a value in return.
    }
    if (number_copy == 1)
    {
        printf("%d is a Happy Number\n", happy_number);
    }
    else if (number_copy == 4)
    {
        printf("%d is not a Happy Number\n", happy_number);
    }
}

int check_Pronic_Number(int number)
{ //A Function to Check whether received number is Pronic Number or Not.
    int temp, i;
    for (i = 1; i <= number; i++)
    {
        temp = i * (i - 1);
        if (temp == number)
        {
            break;
        }
    }
    return temp;
}

void Print_Pronic_Numbers()
{
    register int i = 2, result = 0;
    printf("The Pronic Numbers Upto %d:\n", pronic_range);
    for (; i <= pronic_range; i++)
    {
        result = check_Pronic_Number(i); //Calling an above function to find pronic Numbers.
        if (result == i)
        {
            printf("%d\t", result);
        }
    }
}

void Check_Deficient_Number()
{
    register int i = 1;
    int divisor, sum = 0;
    for (; i <=deficient_number; i++)
    {
        divisor = deficient_number%i;
        if(divisor==0){
            sum += i;
        }
    }
    if(sum<deficient_number*2){
        printf("%d is a Deficient Number\n",deficient_number);
    }else
    {
        printf("%d is not a Deficient Number\n",deficient_number);
    }
}
//Start of the function for finding Twisted Prime Number.
bool IsPrime(int n){
    int divisor,temp=0;
    for(int i = 1;i<=n;i++){
        divisor = n%i;
        if(divisor==0){
            temp += i;
        }
    }
    if((n+1)==temp){
        return true;
    }
    return false;
}

int Reverse_Number(int n){
int reverse=0,remain;
while(n>0){
remain = n%10;
reverse = reverse * 10 + remain;
n = n/10;
}
return reverse;
}

void Check_Twisted_Prime_Number(){
int result=0,rev_result=0;
if(IsPrime(twisted_Prime_Number)){
    result = 1;
}
int rev = Reverse_Number(twisted_Prime_Number);
printf("Reverse of %d is %d\n",twisted_Prime_Number,rev);
if(IsPrime(rev)){
    rev_result = 1;
}
if(result == rev_result){
    printf("%d is a Twisted Prime Number\n",twisted_Prime_Number);
}else
{
    printf("%d is not a Twisted Prime Number\n",twisted_Prime_Number);
}

}
//END of Function TPN.
#undef Power