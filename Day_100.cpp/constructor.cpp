#include<iostream>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char level; 

    //Default Constructor
    // Hero() {
    //     cout << "Constructor Called" << endl;
    // }

    Hero(int health, char level) {
        this -> level = level;
        this -> health = health;
    }

    //Parameterized Constructor
    Hero(int health) {
        this-> health = health;
        cout << "this-> address: " << this << endl;
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
};

int main() {
    // Hero tt; //This will give error as default constuctor is not formed when we made the parametrized one, though we can still create default constructor by ourselves and remove this error.
    //object created statically
    Hero berlin(10); //As we are calling parameterized constructor

    //Address of pointer(this->) and Berlin Verification 
    cout << "Address of Berlin: " << &berlin << endl;

    Hero temp(70, 'A'); 

}
