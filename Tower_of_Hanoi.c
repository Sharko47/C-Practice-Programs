#include<stdio.h>
int Hanoi(int,char,char,char);
int main(int argc, char const *argv[])
{
    int n = 3;
    Hanoi(n,'S','A','D');
    return 0;
}
int Hanoi(int n,char source,char Aux,char Dest){
if(n == 1){
    printf("Move from %c to %c\n",source,Dest);
}else
{
    Hanoi(n-1,source,Dest,Aux);
    printf("HMove from %c to %c\n",source,Dest);
    Hanoi(n-1,Aux,source,Dest);
}
return 0;
}
