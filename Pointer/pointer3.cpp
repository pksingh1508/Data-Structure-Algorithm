#include<iostream>
using namespace std;

int main(){
    //int arr[10] = {3,2,5,6};
    /*
    cout << "Address of first memory block is " << arr << endl;
    cout << arr[0] << endl;
    cout << 0[arr] << endl;
    cout << "Address of arr o index is " << &arr[1] << endl;

    cout << "4th " << *arr << endl;
    cout << "4th " << (*arr) + 1 << endl;
    cout << "4th " << *arr + 1 << endl;
    cout << "5th " << *(arr+1) << endl;
    

    int temp[10] = {0};
    cout << sizeof(temp) << endl;

    int *p = &temp[0];
    cout << sizeof(p) << endl;
    cout << sizeof(*p) << endl;
    cout << sizeof(&p) << endl;
    

    int a[20] = {1,2,3,4,5};
    cout << &a[0] << endl;
    cout << a << endl;
    cout << &a << endl;

    int *p = &a[0];
    cout << &p << endl;
    cout << p << endl;
    cout << &p[0] << endl;
    

    int arr[10] = {1,2,3,4,5,6,7,8};
    //arr = arr + 1;  // Giving error 
    int *p = &arr[0];
    cout << p << endl;
    cout << *p << endl;
    p = p + 1;
    cout << p << endl;
    cout << *p << endl;
    */

    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout << arr << endl;
    cout << ch << endl;

    char *c = &ch[0];
    cout << c << endl;  // Print the entire string

    char temp = 'a';
    char *p = &temp;
    cout << p << endl;

return 0;
}