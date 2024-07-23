#include<iostream>
using namespace std;

    class A {

        public:
            void functionA() {
                cout << "I am in class A" << endl;
            }

            void func() {
                cout << "I am function in class A" << endl;
            }
    };

    class D {
        public:
            void functionD() {
                cout << "I am in class D" << endl;
            }

            void func() {
                cout << "I am function in class D" << endl;
            }
    };
    class B:public A{
        public:
            void functionB() {
                cout << "I am in class B" << endl;
            }
    };
    class C:public A,public D{
        public:
            void functionC() {
                cout << "I am in class C" << endl;
            }
    };
int main(){
    B b;
    b.functionA();
    b.functionB();
    cout << endl;
    C c;
    c.functionA();
    c.functionC();
    c.functionD();
    cout << endl;

    c.A::func();
    c.D::func();
    





return 0;
}