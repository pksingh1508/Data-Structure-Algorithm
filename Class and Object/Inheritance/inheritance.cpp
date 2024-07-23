#include<iostream>
using namespace std;

    class Human {

        private:
            int strength;
        public:
            int height;
            int weight;
            int age;

        public:
            int getAge() {
                return this->age;
            }
            void setWeihght(int w) {
                this->weight = w;
            }
    };

    class Male: protected Human {

        public:
            string color;

            void sleep() {
                cout << "Male Sleeping " << endl;
            }

            int getHeight() {
                return this->height;
            }
    };

int main(){

    Male m1;
    cout << m1.getHeight() << endl;

/*
    Male obj1;

    cout << obj1.age << endl;
    cout << obj1.weight << endl;
    cout << obj1.height << endl;

    cout << obj1.color << endl;
    obj1.setWeihght(45);
    cout << obj1.weight << endl;
    obj1.sleep();

*/


return 0;
}