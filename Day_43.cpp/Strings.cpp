#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    cout << "Emter Your name: ";
    cin >> name;
    name.push_back('c');
    cout << "Your name is: " << name << endl;
}