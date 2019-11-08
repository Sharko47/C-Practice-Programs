#include<stdio.h>
void maxNumbers()
{
    //Finding maximum numbers between three numbers.
    int n1,n2,n3,max=0;
    printf("Enter the values to be compared:\n");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3){
        printf("Number '%d' is the maximum number\n",n1);

    }
    else if (n2>n3)
    {
        printf("Number '%d' is the maximum number\n",n2);
    }
    else
    {
        printf("Number '%d' is the maximum number\n",n3);
    } 
    if(n1==n2 && n2==n3)
    {
        printf("All Inputs are equal to each other.\n");
    }
}
void maxofNpositiveInt()
{
int N,number,max=0,value=1;
printf("Enter how many number to be compared:\n");
scanf("%d",&N);
while(N!=0)
{
printf("Enter the Value %d:\n",value);
scanf("%d",&number);
if(number>max)
{
max=number;
}
else if (number<0)
{
    printf("The Negative Value is not acceptable\n");
    break;
}
value++;
N--;
}
printf("Maximum number is %d\n",max);

}

int main()
{
    maxNumbers();
    maxofNpositiveInt();
    return 0;
}