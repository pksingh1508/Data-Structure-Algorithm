#include<iostream>
#include<vector>

using namespace std;
int main(){

           vector<int> v;
           cout << "Capacity -> " << v.capacity() << endl;

           v.push_back(1);
           cout << "Capacity -> " << v.capacity() << endl;

           v.push_back(2);
           cout << "Capacity -> " << v.capacity() << endl;

           v.push_back(3);
           cout << "Capacity -> " << v.capacity() << endl;
           cout << "Size -> " << v.size() << endl;

           cout << "Element at 2nd position -> " << v.at(2) << endl;

           cout << "First element -> " << v.front() << endl;
           cout << "Last element -> " << v.back() << endl;

           cout << "before pop" << endl;
           for(int i:v){
                cout << i << " ";
           }cout << endl;

           v.pop_back();
           cout << "after pop" << endl;

           for(int i:v){
              cout << i << " ";
           }cout << endl;

           cout << "size before clear " << v.size() << endl;
           cout << "Capacity before clear -> " << v.capacity() << endl;
           v.clear();
           cout << "size after clear " << v.size() << endl;
           cout << "Capacity after clear -> " << v.capacity() << endl;


        vector<int> a(5,1);
        for(int i:a){
            cout << i << " ";
        }cout << endl;

        vector<int> last(a);
        for(int i:last){
            cout << i << " ";
        }cout << endl;


return 0;
}       