#include<stdio.h>
void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int *apples, int oranges_count, int *oranges) {
static int numOfApples = 0,numOfOranges = 0,temp_apples,temp_oranges;
int i;
for(i =0;i<apples_count;i++){
temp_apples = a + (*(apples+i));
printf("%d\n",temp_apples);
 if(temp_apples>=s && temp_apples<=t){
     numOfApples += 1;
 }
}
for(i = 0;i<oranges_count;i++){
temp_oranges = b + oranges[i];
 if(temp_oranges>=s && temp_oranges<=t){
    numOfOranges += 1;
}
}
printf("%d\n",numOfApples);
printf("%d",numOfOranges);
}
int main(int argc, char const *argv[])
{
   int s = 7,t = 11,a = 5,b = 15,apple_c = 3,Oranges_c = 2;
   int apples[] ={-2,2,1},oranges[]={5,-6};
   countApplesAndOranges(s,t,a,b,apple_c,apples,Oranges_c,oranges);
   return 0;
}
