#include<iostream>
using namespace std;

    // Parent class
    class Animal {
        public:
            void speak() {
                cout << "Speaking..." << endl;
            }
    };

    // child class inherited from parent class
    class Dog: public Animal {
        public:
            void speak() {
                cout << "Barking..." << endl;
            }
    };
int main(){
    
    Dog d;
    d.speak();

    Animal a;
    a.speak();

return 0;
}