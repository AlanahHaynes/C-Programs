//Interview Question
//Alanah Haynes, U41848966
/****
This program swaps the values of two user inputted variables
****/

#include <stdio.h>

int main() {                            //The main function to swap the two variables
    int var1, var2;                     //Defining the two variables


    printf("Enter integer value 1: ");      //Prompting the user to input the first value
    scanf("%d", &var1);                     //Storing the value into variable 1

    printf("Enter integer value 2: ");      //Prompting the user to input the second value
    scanf("%d", &var2);                     //Storing the value into variable 2


    //Swapping the values of the variables//

    var2= var1 + var2;                      //Variable 2 becomes the sum of the variables
    var1= var2 - var1;                      //Variable 1 becomes the sum minus variable one which equals the original value of variable 2
    var2= var2 - var1;                      //Variable 2 becomes the sum minus the new variable one (original value of variable two) which equals the original value of variable 1

    printf("Variable 1 is: %d \n", var1);
    printf("Variable 2 is: %d \n", var2);

    return 0;
}