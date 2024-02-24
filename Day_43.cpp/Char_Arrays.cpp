#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    char name[20];

    cout << "Enter Your name: ";
    cin >> name;

    cout << "Your name is ";
    cout << name;
    cout << endl;

    name[2]='\0';
    cout << "New Name is " << name;
}

//Though, cin allow to add space but it will never be reflected in the output and only the first word will appear
//Null Character is always there at the end of the string
//When null chacter comes, the code terminates