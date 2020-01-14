#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    //Typedef is used to rename long datatypes which can help to make program more readable.
    //More like creating a shortcut for writing the same datatype in shortcut using Typedef
   typedef unsigned long long int lli;
   lli bigNumber;
   bigNumber = 1234567891011121314;
   printf("Very Big Number: %llu\n\n",bigNumber);
   //Enumerated datatypes allows us to create our own datatype with predefined values,
   //the values within the braces do not indicate variables, but in fact are constant values that enum can take.
   enum days{
       //We can initialize and define our enum variables with any constant value we want.
       sun,mon,tue,wed,thur,fri,sat
   };
 
   enum days dy = sat;
   printf("Enum Example Output: %d\n\n",dy);
//Bitwise Operator are AND(&),OR(|) and XOR(^) that are used to perform operation on Bits Level.
//There are two more operators i.e: Left Shift Operator(<<) & Right Shift Operator(>>) that are used to shifts bits accordingly.
int a,b,c,d;
a = 50;
b = 40;
printf("Example Inputs: %d & %d\n\n",a,b);
c = a<<1;
d = a>>1;
printf("Left Shifting by One Bit: %d\n\n",c);
printf("Right Shifting by One Bit: %d\n\n",d);
c = c<<2;
d = d>>2;
printf("Left Shifting by Two Bits: %d\n\n",c);
printf("Right Shifting by Two Bits: %d\n\n",d);
c = c<<3;
d = d>>3;
printf("Left Shifting by Three Bits: %d\n\n",c);
printf("Right Shifting by Three Bits: %d\n\n",d);
c = a&b;
printf("Bitwise AND(&) Output: %d\n\n",c);
d = a|b;
printf("Bitwise OR(|) Output: %d\n\n",d);
c = a^b;
printf("Bitwise XOR(^) Output: %d\n\n",c);
c = ~a;
printf("Bitwise Not(~) Output: %d\n\n",c);
//The & operator can be used to quickly check if a number is odd or even. 
//The value of expression (x & 1) would be non-zero only if x is odd, otherwise the value would be zero.
// int x;
//     scanf("%d",&x); 
//     (x & 1) ? printf("Odd") : printf("Even");
//Converting Upper Case to Lower Case Character using Bitwise OR(|) Operator.
char ch = 'B';
//Binary of Capital 'B' is 0100 0010 i.e 66
//' '-Blank Character ASCII Value is 32 i.e 0010 0000
//To Convert into Lower 'b' which has binary equivalent of 0110 0010 i.e 98
printf("Lower Case of 'B': %c\n\n",ch|32);
//Converting Lower Case to Upper Case Character using Bitwise AND(&) Operator.
char chr = 'b';
//Binary of Capital 'B' is 0100 0010 i.e 66
//'_'- Underscore Character ASCII Value is 95 i.e 0101 1111
//To Convert into Upper 'B' which has binary equivalent of 0100 0010 i.e 66
printf("Upper Case 'b': %c",chr&95);
    return 0;
}

