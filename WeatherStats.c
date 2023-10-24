//Weather Statistics
//Alanah Haynes, U41848966
/***
 * This program accepts three text files
 * and finds the highest & lowest temperatures for the year,
 * the highest and lowest rainfall for the year,
 * the total rainfall for the year
 * and the average monthly rainfall.
 * ***/

#include <stdio.h>
typedef struct weatherstats WeatherStats;     //initalizing Weather as an abbreviated form

typedef struct weatherstats{         //defining the struct for each month
    double hightemp;
    double lowtemp;
    double rainfall;
} WeatherStats;


int main() {

    char *months[]= {"January", "February", "March",        //array of pointers to strings that holds month names
                    "April", "May", "June",
                    "July", "August", "September",
                    "October", "November", "December"};

    FILE *pFile;     //pointer to deal with files

    WeatherStats monthlist[12];        // initializing an array of 12 structs for the months

    //STORING HIGH TEMPERATURES

    pFile= fopen("hightemps.txt", "r");        //opening and reading hightemps text file

    

    if(pFile == NULL) {      //IF TEXT FILE CORRUPTED AND EMPTY
        printf("Error opening file \n");
        return 1;       //program termination
    }       //so you do not read in corrupted data
    
    
    int i;

    int highest=0;          //initializing index for highest temp
    for(i=0; i < 12; i++){      //storing the high temperatures for each month
        fscanf(pFile, "%lf", &monthlist[i].hightemp);
        if (monthlist[i].hightemp > monthlist[highest].hightemp){   //finding the highest temp index
            highest= i; 
        }

    }
    printf("The highest temperature this year was %.1lf and occurred in %s \n", monthlist[highest].hightemp, months[highest]);

    fclose(pFile);          //closing hightemps file




    //STORING LOW TEMPERATURES

    pFile= fopen("lowtemps.txt", "r");        //opening and reading low temps text file

    if(pFile == NULL) {      //IF TEXT FILE CORRUPTED AND EMPTY
        printf("Error opening file \n");
        return 1;       //program termination
    }       //so you do not read in corrupted data
    
    int lowest=0;           //index for lowes temp
    for(i=0; i < 12; i++){      //storing the low temperatures
        fscanf(pFile, "%lf", &monthlist[i].lowtemp);
        if (monthlist[i].lowtemp< monthlist[lowest].lowtemp){       //finding the lowest temp index
            lowest= i;
        }
    }

    printf("The lowest temperature this year was %.1lf and occurred in %s \n", monthlist[lowest].lowtemp, months[lowest]);


    fclose(pFile);



    //STORING AVERAGE RAINFALL

    pFile= fopen("rainfall.txt", "r");        //opening and reading rainfall text file

    if(pFile == NULL) {      //IF TEXT FILE CORRUPTED AND EMPTY
        printf("Error opening file \n");
        return 1;       //program termination
    }       //so you do not read in corrupted data
    
    int lowrain=0, highrain=0;              //initialzing lowest and highest rainfall variables
    double totalrain;                   //declaring variable for total rainfall over the year

    for(i=0; i < 12; i++){      //storing the monthly rainfall
        fscanf(pFile, "%lf", &monthlist[i].rainfall);
        if (monthlist[i].rainfall < monthlist[lowrain].rainfall){       //finding lowest rainfall index
            lowrain= i;
        }
        if(monthlist[i].rainfall > monthlist[highrain].rainfall){       //finding highest rainfall index
            highrain= i;
        }
        totalrain+= monthlist[i].rainfall;      //Finding total rainfall
    }

    //Calculating average monthly rainfall
    double avgrain;
    avgrain= totalrain / 12 ;

    printf("The highest rainfall this year was %.2lf and occurred in %s \n", monthlist[highrain].rainfall, months[highrain]);

    printf("The lowest rainfall this year was %.2lf and occurred in %s \n", monthlist[lowrain].rainfall, months[lowrain]);
            
    printf("The total rainfall for the year was: %.2lf \n", totalrain);
    printf("The average monthly rainfall was: %.2lf \n", avgrain);

    fclose(pFile);

    

    return 0;
}