#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(8);
    arr.push_back(9);
    vector<int> ans;

    int row = arr.size();
    int col = arr[0].size();
    int count = 0;
    int total = row * col;

    // Index initilization
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total)
    {
        // Print starting Row
        for (int index = startingCol; index <= endingCol && count < total; index++)
        {
            ans.push_back(arr[startingRow][index]);
            count++;
        }
        startingRow++;

        // Print ending column
        for (int index = startingRow; index <= endingRow && count < total; index++)
        {
            ans.push_back([index][endingCol]);
            count++;
        }
        endingCol--;

        // Print end Row
        for (int index = endingCol; index >= startingCol && count < total; index++)
        {
            ans.push_back([endingRow][index]);
            count++;
        }
        endingRow--;

        // Print starting column
        for (int index = endingRow; index >= startingRow && count < total; index++)
        {
            ans.push_back([index][startingCol]);
            count++;
        }
        startingCol--;
    }

    cout << "The spiral Print of array is" << endl;
    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}