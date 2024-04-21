#include<iostream>
#include<cstring>
using namespace std;

class Hero {
    public:
    int health;
    char level; 
    char *name;
    static int timetocomplete;

    // Default Constructor
    void print() {
        cout << "Name: " << this->name << ", ";
        cout << "Health: " << this->health << ", ";
        cout << "Level: " << this->level << " ";
    }
    //Simple Constructor 
    Hero() {
        cout << "Simple Constructor Called" << endl;
        name = new char;
    }

    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

    //Parameterized Constructor
    Hero(int health) {
        this-> health = health;
        cout << "this-> address: " << this << endl;
    }

    //copy constructor
    Hero(const Hero& temp) {
        //Deep Copy
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name=ch;

        cout << "Copy Constructor Called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    int getHealth() {
        return health;
    }

    void setLevel(char v) {
        level = v;
    }

    void setHealth(int h) {
        health = h;
    }


    void setName(char name[]) {
        strcpy(this->name, name);
    }
};

int Hero :: timetocomplete = 5;

int main() {
    cout << Hero::timetocomplete << endl;
} 
