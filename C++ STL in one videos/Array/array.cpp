#include <iostream>
#include <array>

using namespace std;
int main()
{

    int basic[4] = {1, 2, 3, 4};

    array<int, 4> a = {2, 3, 4, 5};

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "The element at index 2 is -> " << a.at(2) << endl;

    cout << "Empty or not -> " << a.empty() << endl;

    cout << "First Element " << a.front() << endl;

    cout << "Last element " << a.back() << endl;

    return 0;
}