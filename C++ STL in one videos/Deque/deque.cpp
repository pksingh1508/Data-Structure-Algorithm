#include<iostream>
#include<deque>

using namespace std;
int main(){

        deque<int> d;

        d.push_back(1);
        d.push_front(2);

        for(int i:d){
            cout << i << " ";
        }cout << endl;

        d.erase(d.begin(), d.end());
        for(int i:d){
            cout << i << " ";
        }cout << endl;

        // d.pop_front();

        // for(int i:d){
        //     cout << i << " ";
        // }cout << endl;

        // cout << "first index element -> " << d.at(1) << endl;

        //   cout << "first ->" << d.front() << endl;
        // cout << "last -> " << d.back() << endl;





return 0;
}