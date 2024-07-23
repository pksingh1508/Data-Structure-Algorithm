#include<iostream>
#include<vector>
using namespace std;

    vector<int> reverse(vector<int> v , int M){
        int s = M+1, e = v.size()-1;

        while(s<=e){
            swap(v[s], v[e]);
            s++;
            e--;
        }
        return v;
    }

    vector<int> print(vector<int> v){
        
        for(int i=0; i<v.size(); i++){
            cout << v[i] << " ";
        }cout << endl;
    }


int main(){

    vector<int> v;
    int M;

    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(4);
    
    cout << "Enter the index after array to be reversed " << endl;
    cin >> M;
    vector<int> ans = reverse(v,M);

    cout << "The reverse of the array is " << endl;
    print(ans);


return 0;
}