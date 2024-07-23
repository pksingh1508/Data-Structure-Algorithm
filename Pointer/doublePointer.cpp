#include<iostream>
using namespace std;

    void update(int **p)
    {
        p = p + 1;
        // Kuch change hoga -- NO

        //*p = *p + 1;
        // kuch change hoga -- YES

        //**p = **p + 1;
        // Kuch change hoga -- YES
    }

int main(){
    int i = 5;

    int *p = &i;
    int **p2 = &p;

    cout << "Sab sahi chal raha hai - thik hai" << endl;

    // cout << i << endl;
    // cout << *p << endl;
    // cout << **p2 << endl;

    // cout << &i << endl;
    // cout << p << endl;
    // cout << *p2 << endl;

    // cout << &p << endl;
    // cout << p2 << endl;
    cout << endl << endl;
    cout << "before " << i << endl;
    cout << "before " << p << endl;
    cout << "before " << p2 << endl;
    update(p2);
    cout << "After " << i << endl;
    cout << "After " << p << endl;
    cout << "After " << p2 << endl;


return 0;
}