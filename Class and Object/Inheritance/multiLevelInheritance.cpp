#include<iostream>
using namespace std;

    class Animal {

        public:
            int age;
            int weight;

        public:
            void speak() {
                cout << "Speaking..." << endl;
            }
    };

    class Dog : public Animal {

        int color;
    };

    class GermanShepherd : public Dog {

        int strength;
    };
int main(){

    GermanShepherd g;
    g.speak();

return 0;
}           