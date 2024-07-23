#include<iostream>
#include<stdlib.h>
using namespace std;

class Hero {
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    //default constructor
    Hero() {
        cout << "Constructor called " << endl;
        name = new char[100];
    }

    // parameterized constructor
    Hero(int health) {
        this -> health = health;
    }
    Hero(int health, char level) {
        this -> health = health;
        this -> level = level;
    }

    // copy constructor
    // Hero(Hero& temp) {
    //     cout << "copy constructor" << endl;
    //     this -> health = temp.health;
    //     this -> level = temp.level; 
    // }
    // Getter and Setter
    int getHealth() {
        return health;
    }
    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }
    void setLevel(char ch) {
        level = ch;
    }
    void print() {
        cout <<"[ Name: " << this ->name << ",";
        cout << " health:" << this->health << ",";
        cout << " level: " << this->level << "]";
        cout << endl;
    }
    void setName(char name[]) {
        this->name = name;
    }
    ~Hero() {
        cout << "Destructor Bhai called" << endl;
    }
    static int random() {
        return timeToComplete;
    }

    
};

int Hero :: timeToComplete = 5;

int main(){

    cout << Hero :: timeToComplete << endl;
    cout << Hero :: random() << endl;












 /*
    Hero a;

    Hero *b = new Hero();
    // manually destructor calling
    delete b;  
   

    Hero hero1;

    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);

    hero1.print();

    // use default copy constructor
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'G';
    hero1.print();

    hero2.print();

    
    // creating object statically
    Hero ramesh(10);
    ramesh.getHealth();

    Hero temp(33,'B');
    temp.print();
    
    // static allocation
    Hero a;
    a.setHealth(45);
    a.setLevel('B');
    cout << "Level is : " << a.level << endl;
    cout << "health is : " << a.getHealth() << endl;

    // dynamic allocation
    Hero *b = new Hero;
    b->setHealth(89);
    b->setLevel('A');
    cout << "Level is : " << (*b).level << endl;
    cout << "health is : " << (*b).getHealth() << endl;

    cout << "Level is : " << b->level << endl;
    cout << "health is : " << b->getHealth() << endl;

    // creation object
    Hero ramesh;

    cout << "Ramesh health is: " << ramesh.getHealth() << endl;
    cout << "Ramesh health is: " << ramesh.getLevel() << endl;
    ramesh.setHealth(49);
    ramesh.setLevel('B');

    cout << "health is: " << ramesh.getHealth()  << endl;
    cout << "level is: " << ramesh.getLevel() << endl;
    */



return 0;
}