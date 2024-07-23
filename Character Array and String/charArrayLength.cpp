#include<iostream>
using namespace std;

    void getLength(char name[])
    {
    int i=0, ans=0;
    while(name[i]!='\0')
    {
        ans++;
        i++;
    }
    cout << "The length of the char array is " << ans << endl;
    }

int main(){
    
    char name[20];
    cout << "Enter your name : ";
    cin >> name;

    
    getLength(name);

return 0;
}