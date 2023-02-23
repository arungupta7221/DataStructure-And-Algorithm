#include <iostream>
using namespace std;

int main()
{
    int arr[4][4] = {
        {6, 9, 5, 1}, {3, 2, 1, 5}, {5, 6, 3, 4}, {3, 4, 7, 6}};

    for (int col = 0; col < 4; col++)
    {
        if (col % 2 == 0)
        {
            for (int row = 0; row < 4; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            for (int row = 3; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
    }
    return 0;
}