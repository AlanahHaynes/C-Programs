//Linear Search (Pointer Notation)
//Alanah Haynes, U41848966
/****
 This program searches for a value in a user entered array
 ****/

#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

int main() {
    int num_array[SIZE];        //array declaration
    int num;                    //declaration of number to search for
    int *p= num_array;          //declaration of pointer that goes through array
    //bool search;           //initialize bool variable to break out loop

    puts("Enter 10 integer values: ");          //output instructions

    for (p=num_array; p < num_array + SIZE; p++) {      //loop to store 10 values in array
        scanf("%d", &*p);
    }

    printf("Enter the integer you want to search for: \n");     
    scanf("%d", &num);                          //storing the value to search for

    //search=true;

    //while (search==true) {
    for (p=num_array; p < num_array + SIZE; p++) {          //iterate through array
        if (num== *p) {                                     //stop iterating through array if num is found
            printf("The value %d was found at index: %ld \n", num, p - num_array);           //printing where it is found
            //search=false;
            break;                      //prematurely break out loop once value is found
        }
        else if (p== num_array + SIZE - 1) {                //only executes if not in array
            printf("The value %d is not in the array \n", num);         //if not found, print message
        }
    }
    
    //}
    
    
    /***
    //Printing the array
    for (i = 0; i < 10; i++)
    printf("%5d", num_array[i]);
    puts("");
    ***/

return 0;
}