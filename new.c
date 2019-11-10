#include <stdio.h>
int main()
{
   int c, sum, t;
   char n[1000];
   printf("Enter the number?\t");
   scanf("%s", n);
   sum = c = 0;
   while (n[c] != '\0')
   {
      t = n[c] - '0';
      sum = sum + t;
      c++;
   }
   printf("Sum of %s = %d\n",n,sum);
   return 0;
}