#include<stdio.h>
char* kangaroo(int x1, int v1, int x2, int v2) {
char *answer;
if(v1>v2)
{
    if((x2-x1)%(v1-v2) == 0)
        return ("YES");
    else
        return ("NO");
}
else
    return ("NO");
}
int main(int argc, char const *argv[])
{
   int x1 = 63,v1 = 8,x2 = 94,v2 = 3;
   char *ans = kangaroo(x1,v1,x2,v2);
   fprintf(stdout,"%s",ans);
   return 0;
}
