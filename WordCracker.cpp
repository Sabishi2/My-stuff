#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

bool c = false;
string pass, password;
char alb[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'a', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'y', 'z' };
int a,r,e;

int main()
{
  srand (time(NULL));
  cout << "pass: ";
  cin >> password;

    while(a < password.length() && c == false){
      r = rand() % 26 + 0;
      pass[a] = alb[r];
      if(pass[a] == password[a])
    {
        e++; if(e == password.length())
        {
            c = true; cout << "Correct Password Is: "<< pass[a-2] << pass[a-1]<< pass[a];
        }
    }
      if(!c){cout << pass[a] << endl;}
      a++;
      if(pass[a - 1] != password[a - 1]){cout << endl; e = 0; a = 0;}
      if(a == password.length()){ a = 0;}
      }
}
