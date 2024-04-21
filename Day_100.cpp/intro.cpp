#include<iostream>
// #include "Hero.cpp"
using namespace std;

class Hero {
    // properties
    // int name[100];

    private:
    int health;

    public: //It will be accessed in whole code below 
    // int health;
    char level;

    // private:
    // int health;

    //getter: We can access the properties inside these functions in our main function even if they are private
    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    //setter
    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }

};

int main()
{
    //creation of object
    Hero berlin;

    //Based on the concept of Greedy Alignment and Padding
    cout << "Size of Berlin: " << sizeof(berlin) << endl;

    //Using Getter
    // cout << "Berline Health is: " << berlin.getHealth() << endl;

    //Using setter
    berlin.setHealth(70);

    // berlin.health = 70;
    berlin.level = 'A';

    cout << "Health is: " << berlin.getHealth() << endl;
    cout << "Level is: " << berlin.level << endl;

    // cout << "size: " << sizeof(h1) << endl;


    //Size of empty class: 1

}