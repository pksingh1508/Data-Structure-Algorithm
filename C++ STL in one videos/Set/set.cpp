#include<iostream>
#include<set>

using namespace std;
int main(){

    set<int> s;

    s.insert(5);
    s.insert(0);
    s.insert(4);
    s.insert(9);
    s.insert(1);

    for(int i:s){
        cout << i << " ";
    }cout << endl;

    set<int> :: iterator it = s.begin();
    it++;

    s.erase(it);

     for(int i:s){
        cout << i << " ";
    }cout << endl;

    cout << "is present -> " << s.count(4) << endl;


return 0;
}