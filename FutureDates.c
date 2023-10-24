//Future Dates
//Alanah Haynes, U41848966

/****
This program outputs the day of the week entered by the user,
and the next day of the week corresponding to the other number entered by the user.
****/

#include <stdio.h>

int main() {
    int day, future_day;        //declaration of variables

    printf("Enter the day of the week (between 0 and 6): ");    //user prompt for day of the week
    scanf("%d", &day);

    while (day < 0 || day > 6) {                        //input validation
        printf("Out of range. Enter the day of the week (between 0 and 6): ");
        scanf("%d", &day);
    }

    printf("Enter the day of the future desired: ");            //user prompt for how much days in the future
    scanf("%d", &future_day);

    switch(day) {                               //switch that outputs what day it is based on user inputted day number
        case 0:
            printf("Today is Sunday. ");
            break;
        case 1: 
            printf("Today is Monday. ");
            break;
        case 2: 
            printf("Today is Tuesday. ");
            break;
        case 3: 
            printf("Today is Wednesday. ");
            break;
        case 4: 
            printf("Today is Thursday. ");
            break;
        case 5: 
            printf("Today is Friday. ");
            break;
        case 6:
            printf("Today is Saturday. ");
            break;
        default:
            puts("Invalid day!");
    }

    printf("In %d days, ", future_day);             //printing how many days in the future
    
    future_day= day + future_day;                   //finding what day it will be in the future
    while (future_day > 6) {                        //calculation if result not between 0 and 6
        future_day= future_day - 6 - 1;
    }

    switch(future_day) {                            //switch that outputs what day it will be based on the future day
        case 0:
            printf("it will be Sunday. \n ");
            break;
        case 1: 
            printf("it will be Monday. \n");
            break;
        case 2: 
            printf("it will be Tuesday. \n");
            break;
        case 3: 
            printf("it will be Wednesday. \n");
            break;
        case 4: 
            printf("it will be Thursday. \n");
            break;
        case 5: 
            printf("it will be Friday. \n");
            break;
        case 6:
            printf("it will be Saturday. \n");
            break;
        default:
            puts("Invalid future day!");
    }

return 0;
}
