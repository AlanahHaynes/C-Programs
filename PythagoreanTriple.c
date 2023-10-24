//Pythagorean Triple
//Alanah Haynes, U41848966

/****
This program determines sets of Pythogorean triples
up to a user-set limit.
****/
#include <stdio.h>

int main() {
    int hypotenuse;                 //declaring all variables to be used
    int i, j, k;
    int hyp, sum_sides;
    int count=0;                    //initialize count variable to 0

    printf("Enter the length of the hypotenuse: ");         //user prompt for max hypotenuse length
    scanf("%d", &hypotenuse);

    puts("The Pythagorean triples are: ");
    puts("------------------------------");

    for(i=1; i <= hypotenuse; i++){             //loop controlling one side of the triangle
        for(j=1; j <= hypotenuse; j++){             //loop controlling other side of triangle
            for(k=1; k <= hypotenuse; k++) {               //loop controlling the hypotenuse side of the triangle
                if(k > j && j > i) {                //making k be the biggest to prevent duplicates of a triple
                    hyp = k * k;
                    sum_sides= (i*i) + (j * j);
                    if (hyp== sum_sides) {              //test if Pythagorean triple- (c^2 = a^2 + b^2)
                        count++;                        //count the number of triples
                        printf("%d, %d, %d\n", i, j, k);        //print the triple
                        
                    }
                }
            }
        }
    }
    //print the count
printf("There are %d Pythagorean triple(s) within a maximum hypotenuse length of %d. \n", count, hypotenuse); 

return 0;
}

