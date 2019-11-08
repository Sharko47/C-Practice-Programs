#include<stdio.h>
#define PI 3.1428 //Pie Constant
#define Sphere (4.0/3.0) //Sphere Constant
#define Pentagon (5.0/2.0) //Pentagon Constant

#define CelsiusToFahrenheit(c) (float)((c*9)/5) + 32//Macro Function for Converting Celsius to Fahrenheit.

#define FahrenheitToCelcius(f) (float)((f-32)*5)/9 //Macro Function for Converting Fahrenheit to Celcius.

double radius;//Sphere Variable

double length,breadth;//Variables for Calculating Area of Rectangle.

double side_Length,apothem;//Variables for Calculating Area of Pentagon.

int base,height;//Variables for Calculating Area of Parallelogram.

int square_length; //Square Variables

double cone_height;//Cone Variables.

int cube_sides;//Cube Variables.

float triangle_base,triangle_height;//Variables for Calculating Area of Triangle.

double principle_amount,rate_perannum,time_year;//Variables for Calculating the Simple Interest.

double c_length,c_width,c_height;//Variables for Calculating the Surface Area of a Cuboid.

void Calculate_Rectangle_Area(){
    printf("Area of Rectangle = %.2lf\n",length*breadth);
}

void Calculate_Volume_Sphere(){
    double volume = Sphere * PI * radius * radius * radius;
    printf("Volume of the Sphere = %.3lf\n",volume);
}

void Calculate_Pentagon_Area(){
    double P_area = Pentagon * side_Length * apothem;
    printf("Area of Pentagon = %.3lf\n",P_area);
}

void Calculate_Parallelogram_Area(){
    printf("Area of Parallelogram = %d\n",base*height);
}

void Calculate_Square_Area(){
    printf("Area of Square = %d\n",square_length * square_length);
}

void Calculate_Sphere_Surface_Area(){
    double surface_area = (double)4 * PI * (radius * radius);
    printf("Surface Area of Sphere = %.2lf\n",surface_area);
}

void Calculate_Cone_Volume(){
    double cone_vol = PI * (radius * radius) * (cone_height/3);
    printf("Volume of a Cone = %.2lf\n",cone_vol);
}

void Calculate_Cube_Volume(){
    printf("Volume of a Cube = %d\n",(cube_sides*cube_sides*cube_sides));
}

void Calculate_Cylinder_Volume(){
    double cylinder_vol = PI * (radius*radius) * cone_height;
    printf("Volume of the Cylinder = %.3lf\n",cylinder_vol);
}

void Calculate_Equilateral_Triangle_Area(){
    printf("Area of an Equilateral Triangle = %.2f\n",(float)(1.73 * cube_sides * cube_sides)/4);
}

void Calculate_Triangle_Area(){
    printf("Area of a Triangle = %.2f\n",(triangle_base*triangle_height)/2.0);
}

void Calculate_Rectangle_Perimeter(){
    printf("The Perimeter of a Rectangle = %.2lf\n",2.0*(length+breadth));
}

void Calculate_Simple_Interest(){
    printf("Simple Interest = %.3lf\n",(principle_amount*rate_perannum*time_year)/100.0);
}

void Calculate_Cuboid_Surface_Area(){
    printf("The Surface Area of a Cuboid = %.3lf\n",2.0*(c_length*c_width + c_width * c_height + c_height * c_length));
}

void Calculate_Cylinder_Surface_Area(){
    
    printf("The Surface Area of the Cylinder = %.3lf\n",2.0 * PI * (radius + c_height));
}
#undef Sphere
#undef Pentagon
#undef PI