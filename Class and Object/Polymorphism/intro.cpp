#include<iostream>
using namespace std;
    class A {

        public:
            void sayHello() {
                cout << "Hello Love Babbar " << endl;
            }

            void sayHello(string name) {
                cout << "Hello " << endl;
            }
    };
int main(){

    A obj;
    obj.sayHello();
    obj.sayHello("Ram");

return 0;
}   