//Eliminate Duplicates
//Alanah Haynes, U41848966
/****
 This program eliminates any repeating number of 15 integers
 when storing a user entered array
 ****/
#include <stdio.h>
#include <stdbool.h>

int main() {

    int count, i, arrcount=0;       //initializing all variables
    int number;
    int numbers[15];
    bool good_num;

    //for(i=0; i<15; i++) {
      // prime_array[i]=0;
    //}

    printf("Enter 15 integers between 1 and 100 (inclusive): \n");      //print input message

    for(count=0; count < 15; count++) {         //read in 15 integers within range
        good_num=false;                         //initialize the good_num flag to false

        while(good_num==false) {                //count an integer as good only if in range 1 to 100
            scanf("%d", &number);               //read in the integer entered

            if(number < 1 || number > 100) {    //input validation and error message
                printf("Out of range. Only integers between 1 and 100! ");
            }
            else {
                good_num=true;  //exits while loop so integer is counted
            }
        
        }
         //good_num=true;
        if (count >0) {             //skip when array is empty  

            for (i=0; i < arrcount; i++) {          //loop to check for duplicates
                if (number== numbers[i]){
                    good_num= false;                //exit the while loop if duplicate found, to get another number
                        //printf("Duplicate ");
                        //break; - this would full an array of 15 distinct values
                }
            }
        }
        if (good_num==true) {                   //store the distinct numbers in the array
            numbers[arrcount]= number;
            arrcount++;                         //add 1 to count when distinct number is found
        }
    }
    
    printf("There are %d values in the array\n", arrcount);
    printf("The nonduplicate values are: \n");

    for(i=0; i < arrcount; i++) {           //loop to print all distinct array elements
        printf("%d ", numbers[i]);
    }

    return 0;
}



