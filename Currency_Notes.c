#include <stdio.h>
#include <stdlib.h>
void denom(int *, int * ,int);
int main(int argc, char const *argv[])
{
    //Program to compute smallest number of notes combining to give Rs N(SUM).
    int sum,notes = 0;
    printf("Enter the Amount in Rs:\t");
    scanf("%d",&sum);//SUM
    denom(&sum,&notes,100);
    denom(&sum,&notes,50);
    denom(&sum,&notes,20);
    denom(&sum,&notes,10);
    denom(&sum,&notes,5);
    denom(&sum,&notes,2);
    notes += sum;
    printf("Numbers = %d",notes);
    return 0;
}
void denom(int *s,int *n,int c){
*n += ((*s)/c);//Calculating Number of Notes.
*s %= c;//Assigning new remaining SUM.
}