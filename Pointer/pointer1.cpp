#include<iostream>
using namespace std;

int main(){
    int num = 5;

    cout << num << endl;

    //address of operator
    cout << "address of num is " << &num << endl;

    int *ptr = &num;
    cout << "Value is : " << *ptr << endl;
    cout << "Address is : " << ptr << endl;

    double d = 3.2;
    double *p = &d;

    cout << "Value is : " << *p << endl;
    cout << "Address is : " << p << endl;

    cout << "size of integer is " << sizeof(num) << endl;
    cout << "size of pointer is " << sizeof(p) << endl;


return 0;
}