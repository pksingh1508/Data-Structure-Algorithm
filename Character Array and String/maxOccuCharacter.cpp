#include<iostream>
using namespace std;

    char getMaxOccCharacter(string s)
    {
        int arr[26] = {0};

        // Create an array of count of character
        for(int j=0; j<s.length(); j++)
        {
            char ch = s[j];
            int number = 0;
            number = ch - 'a';
            arr[number]++;
        }
        // Find maximum of all the character
        int maxi = -1, ans = 0;
        for(int i=0; i<26; i++)
        {
            if(maxi < arr[i])
            {
                ans = i;
                maxi = arr[i];
            }
        }
        char finalAns = 'a' + ans;
        return finalAns;
    }

int main(){
    string s;
    cout << "Enter the string : " << endl;
    cin >> s;

    cout << getMaxOccCharacter(s) << endl;


return 0;
}