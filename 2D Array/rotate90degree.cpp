#include <iostream>
using namespace std;
void printArray(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void transposeArray(int arr[][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}
void rowSwap(int arr[][3])
{
    for (int i = 0; i < 3 / 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            swap(arr[i][j], arr[3 - i - 1][j]);
            // swap(arr[j][i],arr[j][3-i-1]);
        }
    }
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    transposeArray(arr);
    rowSwap(arr);
    printArray(arr);

    return 0;
}