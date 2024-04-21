#include<iostream>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char level; 


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
    //Static Memory Allocation
    Hero a; 
    (a).setLevel('A');
    (a).setHealth(70); 
    cout << "Level is: " << a.level << endl;
    cout << "Health is: " << a.getHealth() << endl;


    //Dynamic Memory Allocation
    Hero *b = new Hero; //b is address and we derefenced using derefrence(*) operator to use the object present inside this address

    //Both are working same
    (*b).setLevel('A');
    // b->setLevel('A');
    (*b).setHealth(70);   

    cout << "Level is: " << (*b).level << endl;
    cout << "Health is: " << (*b).getHealth() << endl;

    //(->) operator is used for the value output only
    cout << "Level is: " << b->level << endl;
    cout << "Health is: " << b->getHealth() << endl;

    // cout << "Size of Class Hero: " << sizeof(Hero) << endl; 
    // cout << "Size of Object h: " << sizeof(h) << endl;
    //Both giving 8 as output

}