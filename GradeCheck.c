//Grade Checker
//Alanah Haynes, U41848966
/****
 This program gets 8 scores and calculates the final average
*****/

#include <stdio.h>
#include <stdlib.h>     //included to use malloc and sizeof

#define SIZE 8      //defining macros for size of array, and the different weightings
#define HW 0.35
#define MID 0.3
#define FINAL 0.35

char letterGrade(double a);        //initializing function that returns the letter grade

int main() {            //This main function dynamically allocates an array of 10 user entered integers and a final score

    double *p= NULL;       //initializing the pointer to a double
    double num;

    p = (double*) malloc(SIZE * sizeof(double));      //dynamically allocate the pointer

    printf("Enter %d values: ", SIZE);          //output message

    int i;

    for (i = 0; i < SIZE; i++){             //loop that iterates through the array
        scanf("%lf", &num);                  //scan each number
        if(num >=0 && num <= 100) {         //check if that number is within range and store in array
            p[i]= num;
        }
        else {
            printf("Score must be betwen 0 and 100: "); //if not in range, prompt for another number
            i--;
        }   
    }

    double *q= NULL;            //intitialize pointer to a double for final average
    double final;               //variable for final score
    double hwork;

    q = (double*) malloc(sizeof(double));       //dynamically allocate the pointer to the final score
    

    hwork= (double)(p[0] + p [1] + p[2] + p[3] + p[4] + p[5]) / 6;  //calculating the assignment average

    final= (hwork * HW) + (p[6] * MID) + (p[7] * FINAL);        //finding the final score using the weightings
    
    *q= final;          //letting q point to this final score variable

    printf("Your final grade is: %.2lf \n", *q);            //Output Messages
    printf("Your corresponding letter grade is: %c\n", letterGrade(*q));    //calling the letter grade function

    free(p);        //deallocate the space from the pointers
    free(q);
    
    //Printing the Array
    /***
    for (i = 0; i < SIZE; i++)
    printf("%d ", p[i]);
    ***/

return 0;

}

char letterGrade(double a) {       //function that takes the final score as a parameter and returns the
                                    //corresponding letter grade
    if (a >= 90){
        return 'A';
    }
    else if (a>= 80) {
        return 'B';
    }
    else if (a>= 70) {
        return 'C';

    }
    else if (a>= 60){
        return 'D';
    }
    else{
        return 'F';
    }
}