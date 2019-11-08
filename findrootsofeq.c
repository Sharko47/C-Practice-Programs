#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float root1,root2,root;
    float Discriminant,temp;
    printf("Enter integer coefficient for a,b and c:\n");
    scanf("%d %d %d",&a,&b,&c);
    Discriminant = (float)b*b-4*a*c;
    if(Discriminant>0){
        printf("Roots are real\n");
        temp = sqrt(Discriminant);
        root1 = (-b + temp)/(2*a);
        root2 = (-b - temp)/(2*a);
        printf("The roots are %f and %f\n",root1,root2);
    }
    else if (Discriminant==0)
    {
        printf("Roots are equal\n");
        root = -b/2*a;
        printf("The roots is %f\n",root);
    }
    else
    {
        printf("Roots are Complex\n");
        printf("Real Part %f\n",(float)-b/(2*a));
        printf("Imaginary Part +i%f, -i%f\n",Discriminant/(2*a),-Discriminant/(2*a));
    }
    
    
    
}