#include<stdio.h>
void AreaofRectangle()
{
int length,width,result;
printf("Enter Length(Height) and Breadth(width):\n");
scanf("%d %d",&length,&width);
result = length*width;
printf("Area of Rectangle is: %d sq meter\n",result);
}

void FindingPerimeterofanyshape()
{
    //Perimeter is also called as circumference
    //Circumference of a circle is:Area = 2*PI*r*r;
    
    int sides,i,result,values,sum=0;
    int num = 1;
    printf("How many sides are there in a shape?\n");
    scanf("%d",&sides);
    for(i=1;i<=sides;i++)
    {
        
        printf("Enter Side %d value:\t",num);
        num++;
        scanf("%d",&values);
        result = values;
        sum += result;
        
      
    }
      printf("The Perimeter of given Shape is : %d\n",sum);
}
int main()
{
    AreaofRectangle();
    FindingPerimeterofanyshape();
    return 0;
}