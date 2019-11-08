#include<stdio.h>
void main()
{
    int rows,star_num,j,i;
    printf("Enter the number of Rows:\n");
    scanf("%d",&rows);
   // printf("Enter how many star need to be printed\n");
    //scanf("%d",&star_num);
    for( j = 1; j <=rows; j++)
    {
        for( i = 1; i <=j; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}