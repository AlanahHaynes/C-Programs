//Character Lookup
//Alanah Haynes, U41848966

/****
This program converts a user entered number
between 32 and 126 to its corresponding Ascii value.
****/

#include <stdio.h>

int main() {
    int number;         //declaring variables to be used

    printf("Enter a number between 32 and 126 (inclusive): ");      //user prompt 
    scanf("%d", &number);           //storing into number variable

    while (number < 32 || number > 126) {               //input validation to stop when number is less than 32 or greater than 127
        printf("Out of range. Enter a number between 32 and 126 (inclusive): ");  //prompt again
        scanf("%d", &number);
    }

    printf("The entered integer is: %d \n", number);        //printing the user entered number

    //character= '~' - (126 - number);        //alternate calculation

    printf("The corresponding character in the ASCII table is: %c \n", number);      //printing the ascii character corresponding to the number

    return 0;
}