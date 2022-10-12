// PRINTING 1ST ALPHABET AS A UPPER CASE:->

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char name[50];
    cout << "Enter your name : \n";
    cin >> name;
    name[0] = toupper(name[0]);
    cout << name;
    return 0;
}