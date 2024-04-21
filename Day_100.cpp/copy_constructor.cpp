#include<iostream>
using namespace std;

class Hero {
    public:
    int health;
    char level; 

    // Default Constructor
    void print() {
        cout << "Health: " << this->health << endl;
        cout << "Level: " << this->level << endl;
        // // Using this->health and this->level explicitly specifies that the data members belong to the current object. We need to know it as they are giving the same output of this code as well: - 
        // cout << "Health: " << this->health << endl;
        // cout << "Level: " << this->level << endl;
        // // Using this->health a
    }
    Hero() {
        cout << "Default Constructor Called" << endl;
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
};

int main() {
    Hero berlin(70, 'A');
    berlin.print();

    //Copy Constructor = Shallow Copy
    Hero tokyo(berlin);
    tokyo.print(); 

}
