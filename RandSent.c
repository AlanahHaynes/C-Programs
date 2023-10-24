//Random Sentence Generator
//Alanah Haynes, U41848966
/****
 * This program creates random sentences
 * by taking any article, noun, verb 
 * and preposition and adding them together
 * ****/

//Adding the necessary header files to use rand, time, toupper, strcat
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define SIZE 100        //macro for length of the sentence


//do not use just random function, seed the random generator, use time 0 to access system clock, seed it once

int main() {        //This main function creates a random sentence

    //Creating an array of pointers to strings to hold the different word types
    char *article[]= {"the", "a", "one", "some", "any"};

    char *noun[]= {"boy", "girl", "dog", "town", "car"};

    char *verb[]= {"drove", "jumped", "ran", "walked", "skipped"};

    char *prep[]= {"to", "from", "over", "under", "on"};

    

    int i, num;         //declaring for loop and number of sentences variables

    srand(time(0));     //seeding by using time that syncs it with the 
                        //system clock to get random numbers each time

    
    puts("How many sentences would you like to generate?");     //Getting the number of sentences from the user
    scanf("%d", &num);
    
    for(i=0; i < num; i++) {                        //loop to create each sentence
        
        char sentence[SIZE + 1]= "";                //initalizing the sentence as an empty string array
        sentence[SIZE - 1]= '\0';                   //adding the null character at the end for safety

        
        strcat(sentence, article[rand() % 5]);      //adding an article of random index [0 to 4] to sentence array
        strcat(sentence, " ");                      //adding whitespace after each word of the sentence
        
        strcat(sentence, noun[rand() % 5]);         //adding a random noun from the list to the sentence
        strcat(sentence, " ");
        
        strcat(sentence, verb[rand() % 5]);         //adding a verb
        strcat(sentence, " ");
        
        strcat(sentence, prep[rand() % 5]);         //adding a preposition
        strcat(sentence, " ");
        
        strcat(sentence, article[rand() % 5]);      //adding another article
        strcat(sentence, " ");
        
        strcat(sentence, noun[rand() % 5]);         //adding another noun
        strcat(sentence, ".");                      //adding a period to the end of the sentence

        sentence[0]= toupper(sentence[0]);          //changing the first character of the sentence to uppercase
        printf("%s \n", sentence);                  //outputting the sentence

    
    }
    

    return 0;
}
