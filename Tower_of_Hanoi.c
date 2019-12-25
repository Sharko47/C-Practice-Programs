#include<stdio.h>
int Hanoi(int,char,char,char);
int main(int argc, char const *argv[])
{
    int n = 3;
    Hanoi(n,'S','A','D');
    return 0;
}
int Hanoi(int n,char source,char Aux,char Dest){
    static int i = 1;
if(n == 1){
    printf("%d:-> Move from %c to %c\n",i,source,Dest);
    i++;
}else
{
    Hanoi(n-1,source,Dest,Aux);
    printf("%d:-> Else-Move from %c to %c\n",i,source,Dest);
    i++;
    Hanoi(n-1,Aux,source,Dest);
}
return 0;
}
