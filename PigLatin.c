//Pig Latin Generator
//Alanah Haynes, U41848966
/****
 * This program converts English phrases to 
 * Pig latin
 * ****/

#include<stdio.h>       //including header files to use string functions
#include <string.h>

#define SIZE 300        //using a macro for size of the phrase(number of chars)

void PigLatin(char* p);     //defining a function that converts an english phrase to pig latin

int main() {    //This main function reads in an English phrase and outputs it in pig latin

    char phrase[SIZE+1];    //initializing a string to hold the phrase

    puts("Enter a phrase to change to Pig Latin: ");        //prompting the user for a phrase
    //scanf("%s ", phrase);     //only reads in first one

    int ch, i = 0;
    
    //Loop to read in the entire phrase
    while ((ch = getchar()) != '\n') //getchar returns an int!
    {
        if (i < SIZE)
        {
            phrase[i++] = ch;
        }
        phrase[i] = '\0'; //end of string
    }

    
    puts("Your phrase in Pig Latin is: ");
    
    char *cp= strtok(phrase, " ");   //character pointer, checks for whitespace and returns token (first word)
    

    //Loop to split phrase into words
    while (cp != NULL) {        
        PigLatin(cp);           //calling the function to convert each word to pig latin
        cp = strtok(NULL, " "); //to not exit string, instead searches for another whitespace
     
    }


    puts("");       //adding a newline
    return 0;
}


/*This function changes a word to Pig latin by 
moving the first letter to the end and
adding "ay" afterwards */

void PigLatin(char *p){         //takes in the character pointer going through the phrase

    int length= strlen(p);      //finding the size of the word
    //printf("Length of the word is: %d \n", length);

    int i;  

    for(i=0; i < length - 1; i++) {     //loop to take the first letter to the end of the word
        int temp;
        temp= p[i];
        p[i]=p[i+1];
        p[i+1]= temp;
    }

    printf("%say", p);         //adding "ay" in the output statement

    if (p[i+2]== '\0'){         //add a period when reaching end of sentence
        printf(".");
    }
    else{
        printf(" ");
    }
    
}