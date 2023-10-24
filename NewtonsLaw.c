//Newton's Law of Universal Gravitation
//Alanah Haynes, U41848966

/****
This program uses Newton's Law to calculate
the force exerted by and on the Sun, Moon and Earth.
The formula used is from: https://www.physicsclassroom.com/class/circles/Lesson-3/Newton-s-Law-of-Universal-Gravitation
****/


#include <stdio.h>

//Storing the masses for the sun, earth and moon as Macros
#define SUN_MASS 1.99E30
#define EARTH_MASS 5.98E24
#define MOON_MASS 7.36E22


int main() {                //This main function calculates force 
    
    const double sun_earthdist= 1.496E11;    //Storing the distance between the sun and earth
    const double moon_earthdist= 3.84E8;     //Storing the distance between the moon and earth
    const double grav_const= 6.673E-11;     //Storing the gravitational constant

   
    //Defining the three forces to be calculated

    double force_sun_moon;              //Force exerted by sun on moon     
    double force_earth_moon;            //Force exerted by earth on moon
    double force_sun_earth;             //Force exerted by sun on earth


    //Calculating the force exerted with the website formula, F= (G* m1 * m2)/ d^2

    force_sun_moon= (grav_const * SUN_MASS * MOON_MASS) / ((sun_earthdist - moon_earthdist) * (sun_earthdist - moon_earthdist));

    force_earth_moon= (grav_const * EARTH_MASS * MOON_MASS) / (moon_earthdist * moon_earthdist);

    force_sun_earth= (grav_const * SUN_MASS * EARTH_MASS) / (sun_earthdist * sun_earthdist);


    //Printing results in e-notation
    printf("The force exerted by the sun on the moon is: %.3e \n", force_sun_moon);
    printf("The force exerted by the earth on the moon is: %.3e \n", force_earth_moon);
    printf("The force exerted by the sun on the earth is: %.3e \n", force_sun_earth);

    return 0;


}