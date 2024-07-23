#include<iostream>
using namespace std;
    char toLowerCase(char ch)
    {
        if(ch>='a' && ch<='z')
        {
            return ch;
        }
        else
        {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    void palindrome(char name[], int n)
    {
        int s=0, e=n-1,p=0;
        for(int i=0; i<n; i++)
        {
            if(toLowerCase(name[s]) == toLowerCase(name[e]))
            {
                s++;
                e--;
                continue;
            }
            else
            {
                p=1;
                break;
            }
        }
        if(p==0)
            cout << "Palindrome" << endl;
        else
            cout << "Not Palindrome " << endl;
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

    palindrome(name,len);

    cout << "CHARACTER IS " << toLowerCase('b') << endl;
    cout << "CHARACTER IS " << toLowerCase('G') << endl;

return 0;
}