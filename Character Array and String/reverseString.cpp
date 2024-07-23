#include<iostream>
using namespace std;

    void reverse(char name[], int n)
    {
        int s=0, e=n-1;
        while(s<=e)
        {
            swap(name[s], name[e]);
            s++;
            e--;
        }
    }

    int getLength(char name[])
    {
    int i=0, ans=0;
    while(name[i]!='\0')
    {
        ans++;
        i++;
    }
    return ans;
    }

int main(){
    
    char name[20];
    cout << "Enter your name : ";
    cin >> name;

    
    int len = getLength(name);
    cout << name << endl;

    cout << "After reverse" << endl;
    reverse(name,len);
    cout << name << endl;

return 0;
}