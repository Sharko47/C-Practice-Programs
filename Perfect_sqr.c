#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1,num2,temp;
    printf("Enter the Number 1 & 2:\n");
    scanf("%d %d",&num1,&num2);
    temp = num1 * num2;
    printf("%d\n",temp);
    return 0;
}
