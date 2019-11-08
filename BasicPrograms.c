#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include"BasicProgramHeader.h"
#define Withoutmain m##a##i##n()
int Withoutmain
{   
    int choice;
    printf("Choose Any One:\n1.Find the Area Of Rectangle\n2.Find Volume of Sphere\n3.Find the Area of Pentagon\n");
    printf("4.Find the Area of Parallelogram\n5.Find the Area of Square\n6.Find Surface Area of a Sphere\n7.Find Volume of a Cone\n");
    printf("8.Find Volume of the Cube\n9.Find Volume of the Cylinder\n10.Convert Celsius To Fahrenheit\n11.Convert Fahrenheit To Celsius\n");
    printf("12.Find the Area of an Equilateral Triangle\n13.Find the Area of a Triangle OR Right Angle Triangle\n14.Find the Perimeter of a Rectangle\n");
    printf("15.Find Simple Interest\n16.Find Surface Area of a Cuboid\n17.Find Surface Area of a Cylinder\n\n");
    printf("Choice:\t");
    scanf("%d",&choice);
    if(choice < 0){
        printf("Choice cannot be Negative as you can see the options available.\n");
    }
    else if(choice == 1){
        printf("\t\t\t\tYour Choice was -> 1.Find the Area Of Rectangle\n");
        extern double length,breadth;
        printf("Enter Length & Breadth of a Rectangle:\t");
        scanf("%lf %lf",&length,&breadth);
    Calculate_Rectangle_Area(length,breadth);
    }else if (choice == 2)
    {
        /* code */
        printf("\t\t\t\tYour Choice was -> 2.Find Volume of Sphere\n");
        extern double radius;
        printf("Enter the radius of a Sphere:\t");
        scanf("%lf",&radius);
        Calculate_Volume_Sphere(radius);
    }else if (choice == 3)
    {
        /* code */
        printf("\t\t\t\tYour Choice was -> 3.Find the Area of Pentagon\n");
        extern double side_Length,apothem;
        printf("Enter the Sides Length & Apothem of a Pentagon:\t");
        scanf("%lf %lf",&side_Length,&apothem);
        Calculate_Pentagon_Area(side_Length,apothem);
    }else if (choice == 4)
    {
        /* code */
        printf("\t\t\t\tYour Choice was -> 4.Find the Area of Parallelogram\n");
        extern int base,height;
        printf("Enter Base & Height of the Parallelogram\t");
        scanf("%d %d",&base,&height);
        Calculate_Parallelogram_Area(base,height);
    }else if (choice == 5)
    {
        /* code */
        printf("\t\t\t\tYour Choice was -> 5.Find the Area of Square\n");
        extern int square_length;
        do{
            printf("Enter the Single Side Length of a Square:\t");
        scanf("%d",&square_length);
        }while(square_length<INT_MIN || square_length>INT_MAX);
        Calculate_Square_Area(square_length);
    }else if (choice == 6)
    {
        /* code */
        printf("\t\t\t\tYour Choice was -> 6.Find Surface Area of a Sphere\n");
        extern  double radius;
        printf("Enter the Radius of a Sphere:\t");
        scanf("%lf",&radius);
        Calculate_Sphere_Surface_Area(radius);
    }else if (choice == 7)
    {
        /* code */
        printf("\t\t\t\tYour Choice was -> 7.Find Volume of a Cone\n");
        extern double radius,cone_height;
        printf("Enter the Height & Radius of a Cone:\t");
        scanf("%lf %lf",&radius,&cone_height);
        Calculate_Cone_Volume(radius,cone_height);
        
    }else if (choice == 8)
    {
        /* code */
        printf("\t\t\t\tYour Choice was -> 8.Find Volume of the Cube\n");
        extern int cube_sides;
        printf("Enter the value of Side:\t");
        scanf("%d",&cube_sides);
        Calculate_Cube_Volume(cube_sides);
    }
    else if (choice == 9)
    {
        /* code */
        printf("\t\t\t\tYour Choice was -> 9.Find Volume of the Cylinder\n");
        extern double cone_height,radius;
        printf("Enter the Radius & Height of a Cylinder:\t");
        scanf("%lf %lf",&cone_height,&radius);
        Calculate_Cylinder_Volume(radius,cone_height);
    
    }else if (choice == 10)
    {
        /* code */
        printf("\t\t\t\tYour Choice was -> 10.Convert Celsius To Fahrenheit\n");
        float celcius;
        printf("Enter the Celcius:\t");
        scanf("%f",&celcius);
        printf("Temperature in Fahrenheit = %.2f",CelsiusToFahrenheit(celcius));//Calling a Macro Function.
    }
    else if (choice == 11)
    {
        /* code */
        printf("\t\t\t\tYour Choice was -> 11.Convert Fahrenheit To Celsius\n");
        float fahrenheit;
        printf("Enter the Fahrenheit:\t");
        scanf("%f",&fahrenheit);
        printf("Temprature in Celcius = %.2f",FahrenheitToCelcius(fahrenheit));//Calling a Macro Function.
    }
    else if (choice == 12)
    {
        /* code */
        printf("\t\t\t\tYour Choice was -> 12.Find the Area of an Equilateral Triangle\n");
        extern int cube_sides;//The Variable intended for Cube Calculation but we're using it for finding ET Area.
        printf("Enter the Side of an Equilateral Triangle:\t");
        scanf("%d",&cube_sides);
        Calculate_Equilateral_Triangle_Area(cube_sides);

    }
    else if (choice == 13)
    {
        /* code */
        printf("\t\t\t\tYour Choice was -> 13.Find the Area of a Triangle OR Right Angle Triangle\n");
        extern float triangle_base,triangle_height;
        printf("Enter the Base & Height of a Triangle:\t");
        scanf("%f %f",&triangle_base,&triangle_height);
        Calculate_Triangle_Area(triangle_base,triangle_height);
    }
    else if (choice == 14)
    {
        /* code */
        printf("\t\t\t\tYour Choice was -> 14.Find the Perimeter of a Rectangle\n");
        extern double length,breadth;
        printf("Enter the One Side Lenght & Breadth of a Rectangle:\t");
        scanf("%lf %lf",&length,&breadth);
        Calculate_Rectangle_Perimeter(length,breadth);
    }
    else if (choice == 15)
    {
        /* code */
        printf("\t\t\t\tYour Choice was -> 2.Find Volume of Sphere\n");
        extern double principle_amount,rate_perannum,time_year;
        printf("Enter Principle Amount:\t");
        scanf("%lf",&principle_amount);
        printf("Enter Rate Per Annum:\t");
        scanf("%lf",&rate_perannum);
        printf("Enter Time in Year:\t");
        scanf("%lf",&time_year);
        Calculate_Simple_Interest(principle_amount,rate_perannum,time_year);

    }
    else if (choice == 16)
    {
        /* code */
        printf("\t\t\t\tYour Choice was -> 16.Find Surface Area of a Cuboid\n");
        extern double c_length,c_width,c_height;
        printf("Enter the Cuboid Length:\t");
        scanf("%lf",&c_length);
        printf("Enter the Cuboid Width:\t");
        scanf("%lf",&c_width);
        printf("Enter the Cuboid Height:\t");
        scanf("%lf",&c_height);
        Calculate_Cuboid_Surface_Area(c_length,c_width,c_height);
    }
    else if (choice == 17)
    {
        /* code */
        printf("\t\t\t\tYour Choice was -> 17.Find Surface Area of a Cylinder\n");
        extern double radius,c_height;
        printf("Enter radius & height of a Cylinder:\t");
        scanf("%lf %lf",&radius,&c_height);
        Calculate_Cylinder_Surface_Area(radius,c_height);
    }
    else if (choice>17)
    {
        /* code */
        printf("Please enter choice Between 1 To 17\n");
    }
    printf("************************************************THANK YOU***************************************************");
    return 0;
}
