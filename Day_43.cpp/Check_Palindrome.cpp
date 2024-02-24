#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

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
    char temp[20];

    cout << "Enter your Name: ";
    cin >> temp;

    strcpy(name, temp);

    int len = getLength(temp);

    reverse(temp, len);
    cout << "Reverse of name: " << temp << endl;

    if (strcmp(temp, name) == 0)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }
}