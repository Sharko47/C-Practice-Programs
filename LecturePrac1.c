#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int main()
{
int t,m=1,a=5;//Postfix and Prefix:Increment and Decrement of Value.
printf("%d\n",&t);
printf("%d\n",m);
t=50+ ++m;
printf("%d\n",t);
printf("%d\n",m);
t=t- m--;

printf("%d\n",t);
t=a++ - ++a;
printf("%d\n",t);
printf("%d\n",a);
a>0?printf("True\n"):printf("false");//Ternary Contional Operator Example.

char name[] = "Sharukh Shaikh\n";//This is like a string as an array storing multiple characters.
int i=0;
while(name[i]){//If we do not know when to stop then we should always use while-loop.
    putchar(toupper(name[i]));//toupper and tolower is a function of a ctype.h library which help
     //to make uppercase letter into lower and vice versa.
    //printf("%c",toupper(b[i]));//Same work had been done by using  printf function.
    i++;
}

char choice;//Switch Case Statement.
switch (choice=toupper(getchar()))//getchar and putchar is another function comes along with stdio.h library.
{
    case 'R':
        printf("Your selected color is :Red\n");
        break;
    case 'G':
        printf("Your selected color is :Green\n");
        break;
    case 'B':
        printf("Your selected color is :Blue\n");
        break;
    case 'Y':
        printf("Your selected color is :Yellow\n");
        break;

    default:
        printf("Invalid Choice\n");
        break;
}
printf("The size of String: %d\n",strlen(name));//strlen is a function available in the string.h library which gives length of any string.
int d=5;
do{
    //This is example of do-while loop where the block will execute atlease once in its lifetime.
    printf("Do-while loop example: %d\n",++d);
}while(d<=4);

int fact=1,number;
printf("Enter the number to find factorial\n");
scanf("%d",&number);
for(int i=1;i<=number;i++)
{
    fact=fact*i;
}
printf("Factorial of %d is: %d\n",number,fact);
int fact2=1,i2=1;
while(1){
 fact2= fact2*i2;
 i2++;
 if(i2<5){
     continue;//Let block of code to continue if condition are met properly.
 }   
 break;//This is break the execution of particular block of code.
}
printf("%d",fact2);
printf("%d",sqrt(25));
}



