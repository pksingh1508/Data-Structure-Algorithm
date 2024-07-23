#include<iostream>
using namespace std;
#define PI 3.1416
#define area(r) (PI * (r) * (r))
#define min(a,b) (((a) < (b)) ? (a) : (b))


int main(){
    float r = 5;
    cout << "Area is " << area(r) << endl;

    int a,b;
    cout << "Enter two numbers " << endl;
    cin >> a >> b;

    cout << "Minimum Value between " << a << " and " << b << " is " << min(a,b) << endl;

return 0;
}