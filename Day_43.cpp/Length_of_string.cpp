#include <iostream>
#include <string>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];

    cout << "Enter Your name: ";
    cin >> name;

    cout << "Your name is ";
    cout << name << endl;
    cout << "Length of Original Name: " << getLength(name) << endl;

    name[2] = '\0';
    cout << "New Name is " << name << endl;
    cout << "Length of New Name: " << getLength(name) << endl;
}