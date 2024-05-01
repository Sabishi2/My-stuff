#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wholeThingie(int amountOfTimes, int i) {

    char *rows[] = {"*             ",
                    "**           *",
                    "***         **",
                    " ***       ***",
                    "  ***     *** ",
                    "   ***   ***  ",
                    "    *** ***   ",
                    "     *****    ",
                    "      ***     ",
                    "       *      ",
    };
    int lengthOfRows = sizeof(rows) / sizeof(rows[0]);

    int j, k, loop;



    char printString[13];


    for(j=0;j<lengthOfRows;j++) {
        printf("\n");

        for(k=0;k<14;k++) {

            if(k+(i%14) < 14) {
                printString[k] = rows[j][ k + (i%14) ];
            }

            else if(k+(i%14)>=14) {
                printString[k] = rows[j][k+(i%14)-14];
            }

        }
        printString[14] = '\0';

        for(loop=0;loop<amountOfTimes;loop++) {
            printf("%s",printString);
        }

    }
}

int main()
{

    int i = 0;
    int rows = 0;
    int amountOfTimes, yes;


    printf("How many triangle things in a row: ");
    scanf("%d", &amountOfTimes);
    yes = amountOfTimes;
    printf("Press any key to continue");
    getch();


    while(!kbhit()){
        i++;
        system("cls");
        printf("\n\n\n");
        for(rows=0;rows<2;rows++) {
            printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
            wholeThingie(yes, i);
        }
        printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
        usleep( 10000 );

    }


    return 0;
}
