#include <stdio.h>
#include <stdlib.h>

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
    int length;
    char printString[13];

    printf("How many triangle things in a row: \n");
    scanf("%d", &amountOfTimes);

    printf("How long do you want it to last for approx (seconds): \n");
    scanf("%d", &length);


    for(i=0;i<(length*10);i++) {
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
    }


    return 0;
}
