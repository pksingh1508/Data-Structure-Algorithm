#include<iostream>
using namespace std;

    class Animal {

        public:
            int age;
            int weight;

        public:
            void bark() {
                cout << "Barking..." << endl;
            }
    };

    class Human {

        public:
            string color;
        public:
            void speak() {
                cout << "Speaking..." << endl;
            }
    };

    // Multiple Inheritance
    class Hybrid: public Animal, public Human {

        int m;
    };
int main(){

    Hybrid h;
    h.speak();
    h.bark();

return 0;
}