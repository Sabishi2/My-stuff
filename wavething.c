#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    char *rows[] = {"**           *",
                    "***         **",
                    " ***       ***",
                    "  ***     *** ",
                    "   ***   ***  ",
                    "    *** ***   ",
                    "     *****    ",
                    "      ***     ",
    };
    int lengthOfRows = sizeof(rows) / sizeof(rows[0]);

    int i, j, k, loop;

    int amountOfTimes;
    int length, yes;

    char printString[13];
    float time_spent;



    printf("How many triangle things in a row: ");
    scanf("%d", &amountOfTimes);

    printf("\nHow long do you want it to last for approx (seconds): ");
    scanf("%d", &length);
    yes = length;




    clock_t begin = clock();



    while(time_spent < yes){
        i++;
        system("cls");
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

            for(loop=0;loop<amountOfTimes;loop++) {
                printf("%s",printString);
            }

        }

        usleep( 10000 );
        clock_t end = clock();
        time_spent = (float)(end - begin) / CLOCKS_PER_SEC;

    }


    return 0;
}
