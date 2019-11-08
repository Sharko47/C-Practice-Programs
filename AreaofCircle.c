#include <stdio.h>
#define PI 3.1415926
int main()
{
    float area,radius;
    float myFunction(float);
    printf("Enter the Circle's Radius:\n");
    scanf("%f",&radius);
    area = myFunction(radius);
 printf("Addtion is:%.3f\n",area);
 return 0;
   
}
float myFunction(float rad)
{
float result;
result = PI*rad*rad;
return (result);
}

