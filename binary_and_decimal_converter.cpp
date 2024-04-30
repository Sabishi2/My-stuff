#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    std::vector<int> myArray;
    int entered, encrypted, bincrypter, yes=0, x, n, bincrypted = 0, value;
    string bintered, str;
    cout<<"Give decimal value and we will convert it into binary > ";
    cin>>entered;


    while (entered >= 1)
    {
        encrypted = entered % 2;
        entered = entered / 2;                           //gets number backwards cuz Im a dumbass
        myArray.insert(myArray.begin(), encrypted);      //adds number to the start of the array so it reverses the whole thing
    }

    for(auto const& value: myArray)
    {
        std::cout << value;             //prints array
    }

    cout<<" "<<endl;
    char a;


    cout<<"Would you like to try the binary to decimal converter? Y/N"<<endl;
    cin>>a;

    if (a == 'Y' || a == 'y')
    {
        cout<<"Ok, enter a binary number and we will decrypt it > ";
        cin>>bintered;                                                  // Just used bintered as "binary + entered". I was bored.

        int x = bintered.length() - 1; //digit length
        int y = 0;
        int power = 0;
        while (x != -1)
        {
            if (bintered[y] == 48 || bintered[y] == 49) //bintered[y] uses ASCII code so 0 == 48 and 1 == 49. Thats why this if statement exists here.
            {
                bintered[y] = bintered[y] - 48;
            }
           power = bintered[y] * pow(2.0, x);       //Converts to decimal
           bincrypted = bincrypted + power;
           y++;
           x = x - 1;
        }


        cout<<bincrypted<<endl;
        cout<<" "<<endl;
    }


            else
            {
                cout<<"Ok thank you anyway."<<endl;
            }


    return 0;
}
