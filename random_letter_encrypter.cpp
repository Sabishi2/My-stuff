#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <string.h>

using namespace std;

int main()
{
    int a = 0;
    srand(time(NULL));
    string written;

    cout<<"Enter code and we will encrypt it > ";
    getline(cin, written);

    while (a != written.length())
    {
       char b = written[a];
       int ran = 1 + (rand() % ( 26 ) );

       if (b >= 'A' && b <= 'Z')
       {
          ran = 27 + ran;
       }

       if (b >= 'a' && b <= 'z')
       {
           ran = ran;
       }

       else
       {
        ran = 27;
       }

       switch (ran)
       {
        case 1: b = 'a';
        break;

        case 2: b = 'b';
        break;

        case 3: b = 'c';
        break;

        case 4: b ='d';
        break;

        case 5:b = 'e';
        break;

        case 6:b = 'f';
        break;

        case 7:b = 'g';
        break;

        case 8:b = 'h';
        break;

        case 9:b = 'i';
        break;

        case 10:b = 'j';
        break;

        case 11:b = 'k';
        break;

        case 12:b = 'l';
        break;

        case 13:b = 'm';
        break;

        case 14:b = 'n';
        break;

        case 15:b = 'o';
        break;

        case 16:b = 'p';
        break;

        case 17: b = 'q';
        break;

        case 18:b = 'r';
        break;

        case 19:b = 's';
        break;

        case 20: b= 't';
        break;

        case 21:b = 'u';
        break;

        case 22:b = 'v';
        break;

        case 23:b = 'w';
        break;

        case 24:b = 'x';
        break;

        case 25:b = 'y';
        break;

        case 26:b = 'z';
        break;

        case 27: b = b;
        break;

        case 28: b = 'A';
        break;

        case 29: b = 'B';
        break;

        case 30: b = 'C';
        break;

        case 31: b ='D';
        break;

        case 32:b = 'E';
        break;

        case 33:b = 'F';
        break;

        case 34:b = 'G';
        break;

        case 35:b = 'H';
        break;

        case 36:b = 'I';
        break;

        case 37:b = 'J';
        break;

        case 38:b = 'K';
        break;

        case 39:b = 'L';
        break;

        case 40:b = 'M';
        break;

        case 41:b = 'N';
        break;

        case 42:b = 'O';
        break;

        case 43:b = 'P';
        break;

        case 44: b = 'Q';
        break;

        case 45:b = 'R';
        break;

        case 46:b = 'S';
        break;

        case 47: b= 'T';
        break;

        case 48:b = 'U';
        break;

        case 49:b = 'V';
        break;

        case 50:b = 'W';
        break;

        case 51:b = 'X';
        break;

        case 52:b = 'Y';
        break;

        case 53:b = 'Z';
        break;

       }

        cout<<b;
        a++;
    }


    return 0;
}
