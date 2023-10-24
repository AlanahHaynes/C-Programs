//Sieve of Eratosthenes
//Alanah Haynes, U41848966
/****
 This program utilizes Eratosthenes sieve method 
 to find prime numbers
 ****/

#include <stdio.h>

void prime_funct(int a[], int size);        //declaring function to flip non prime numbers to 0

int main() {
    int size;                       //declaring the user entered size
    int val=1;                      //variable to set 1 in the array elements
    

    printf("Enter the size of the array: ");        //user input for size
    scanf("%d", &size);

    int prime_array[size];              //declaring an array of that size
    int i;

    for(i=0; i < size; i++) {           //loop to make all array elements equal 1
        prime_array[i]=val;
        //printf("%d ", prime_array[i]);
    }
    
    prime_funct(prime_array, size);         //calling the function that makes prime number indices have a value of 1

    printf("The prime numbers are: \n");

    int col = 0;                //initialize a column variable


    //Loop to print out 10 prime numbers per line

    for (i = 2; i < size; i++) {        //iterating through new array 
        if (prime_array[i] == 1) {      //getting the prime numbers (value = 1)
            if (col < 10) {             
                printf ("%10d  ", i);   //printing the prime number if column less than 10
                col++;                  //increment count
            }
            else {
                printf ("\n");          //print a new line when column is 10
                col = 0;                //reset column to 0 for the new line                   
            }
        }
    }

return 0;
}

void prime_funct(int a[], int size) {       //function to find prime numbers
    
    int i, j;                   //initialize loop variables
    int count=0;                //initialize counter to track how many prime numbers
    

    for (i=2; i < size; i++) {          //iterates through array, starting at index 2 since 0 and 1 are not prime
        if (a[i]==1) {                  //checking for remaining prime numbers (array elements with value of 1)
            for (j=i*2; j < size; j++) {    //loop starting at the first multiple
                if(j % i == 0) {        //making all multiples equal 0 to signal not prime
                    a[j]=0;
                }
            }
        count++;                    //add 1 to count when a prime number is found
        }
    }
    printf("There were %d prime numbers discovered in the array \n", count);    //display how many prime numbers found
    
}

    
