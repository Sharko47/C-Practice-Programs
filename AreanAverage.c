#include<stdio.h>
void findAverageOfN()
{
int N,number,i,sum=0,value=1;
printf("Enter how many numbers you want to find average of:\n");
scanf("%d",&N);
printf("Enter the numbers to be added:\n");
//Finding Average of N numbers using While-Loop
float n=N;
while(N!=0)
{
      printf("Enter Value %d:\n",value);
      scanf("%d",&number);
      sum+=number;
      value++;
   N--;
}
float avg=sum/n;
printf("Average of %d: %.2f",sum,avg);
/*
Finding Average of N numbers using For-Loop
for(i=0;i<N;i++)
{
scanf("%d",&number);
}
*/
/*
for(i = 0; i<N; i++)
{
   sum+=number;
}*/
}

void main()
{
findAverageOfN();
}