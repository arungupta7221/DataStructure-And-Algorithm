#include <iostream>
#include <climits>
using namespace std;

void transpose(int arr[][3], int rows, int cols, int ans[][3])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            ans[i][j] = arr[j][i];
        }
    }
}

int main()
{
    int arr[3][3] = {
        {6, 9, -5}, {3, 24, 1}, {5, 0, 3}};
    int ans[3][3];
    transpose(arr, 3, 3, ans);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}