#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(9);

    cout << "Element present or not" << binary_search(v.begin(), v.end(), 7) << endl;

    cout << "Lower bound " << lower_bound(v.begin(), v.end(), 7)-v.begin() << endl;
    cout << "Upper bound " << upper_bound(v.begin(), v.end(), 7)-v.begin() << endl;

    int a = 3;
    int b = 5;
    cout << "Max -> " << max(a,b) << endl;
    cout << "Min -> " << min(a,b) << endl;

    swap(a,b);
    cout << "a -> " << a << endl;
    cout << "b -> " << b << endl;

    string ab = "abcd";
    reverse(ab.begin(), ab.end());
    cout << "string is -> " << ab << endl;

    rotate(v.begin(), v.begin()+1, v.end());
    cout << "after rotated"<< endl;
    for(int i:v){
        cout << i << " ";
    }cout << endl;

    sort(v.begin(), v.end());
    for(int i:v){
        cout << i << " ";
    }cout << endl;

return 0;
}