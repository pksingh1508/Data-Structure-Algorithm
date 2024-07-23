#include <iostream>
#include <map>

using namespace std;
int main()
{

    map<int, string> m;

    m[1] = "Pawan";
    m[2] = "Kumar";
    m[3] = "Singh";

    m.insert({5, "Bheem"});

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    return 0;
}