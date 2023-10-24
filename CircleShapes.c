//Shapes inscribed in a circle
//Alanah Haynes, U41848966

/****
This program finds the circumference and area of a circle.
It also calculates the side length, perimeter and area of the largest square 
and of the largest triangle that can fit in the circle.
****/

#include <stdio.h>
#include <math.h>           //The math header file

//note: M_PI does not work with -std=c99 compiler, compile with lm because math file not linked 


int main() {
    double radius;                          //defining all the variables to be used and calculated
    double circumference, area;
    double square_length, square_perimeter, square_area;
    double triangle_length, triangle_perimeter, triangle_area;


    puts("Enter the radius of the circle: ");     //User prompt for circle radius
    scanf("%lf", &radius);                          //storing value into radius

    //Calculating the Circumference & Area of the Circle
    circumference = 2 * radius * M_PI;
    area = pow(radius, 2) * M_PI;

    //Calculating the Largest Square Values
    square_length= 2 * radius * (1/ sqrt(2));
    square_perimeter= 4 * square_length; 
    square_area= pow(square_length, 2);

    //Calculating the Largest Equilateral Triangle Values
    triangle_length= 2 * radius * (sqrt(3)/2);
    triangle_perimeter= 3 * triangle_length;
    triangle_area= pow(triangle_length, 2) * (sqrt(3)/4);

    //Outputting results formatted to 3 decimal places
    printf("The circumference and area of the circle are: %.3lf and %.3lf \n", circumference, area);
    printf("The side length, perimeter and area of the largest square inscribed in the circle are: %.3lf, %.3lf and %.3lf \n", square_length, square_perimeter, square_area);
    printf("The side length, perimeter and area of the largest triangle inscribed in the circle are: %.3lf, %.3lf and %.3lf \n", triangle_length, triangle_perimeter, triangle_area);   

return 0;
}