#include<iostream>
#include<cstring>
using namespace std;

class Hero {
    public:
    int health;
    char level; 
    char *name;

    // Default Constructor
    void print() {
        cout << "Name: " << this->name << ", ";
        cout << "Health: " << this->health << ", ";
        cout << "Level: " << this->level << " ";
        // // Using this->health and this->level explicitly specifies that the data members belong to the current object. We need to know it as they are giving the same output of this code as well: - 
        // cout << "Health: " << this->health << endl;
        // cout << "Level: " << this->level << endl;
        // // Using this->health a
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

    //copy constructor(without "&", it's not working so we have to pass it by reference)
    Hero(const Hero& temp) {
        //Deep Copy
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name=ch;

        cout << "Copy Constructor Called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    // in this case, you're trying to use the copy constructor to create a copy of the temp object, which would lead to an infinite recursion.

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

    //Destructor
    ~Hero() {
        cout << "Destructor Called" << endl;
    }
};

int main() {
    //static
    Hero a;

    //dynamic
    Hero *b = new Hero();

    //manual destructor calling
    delete b;

    return 0;
}
