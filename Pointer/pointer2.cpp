#include<iostream>
using namespace std;

int main(){
    int i = 5;


    int *ptr = &i;

    int *q = ptr;
    cout << *q << endl;
    cout << *ptr << endl;


return 0;
}