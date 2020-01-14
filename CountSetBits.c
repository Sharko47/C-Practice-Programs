#include<stdio.h>
int countSetBits(int);
int isPowerof2(int x) 
{ 
    return (x && !(x & x-1)); 
} 
int main(int argc, char const *argv[])
{
    int num,count,result;
    printf("Enter the Number:\t");
    scanf("%d",&num);
    count = countSetBits(num);
    printf("Number of Bits Set in %d: %d\n\n",num,count);
    result = isPowerof2(num);
    if(result){
        printf("%d is the Power of 2\n",num);
    }else
    {
        printf("%d is not the Power of 2\n",num);
    }
    
    return 0;
}
int countSetBits(int x) 
{ 
    int count = 0; 
    while (x) 
    { 
        x &= (x-1); 
        count++; 
    } 
    return count; 
}
