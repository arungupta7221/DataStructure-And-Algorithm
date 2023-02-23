#include <iostream>
#include <climits>
using namespace std;

int maxElement(int arr[][3], int rows, int cols)
{
    int maxi = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}
int minElement(int arr[][3], int rows, int cols)
{
    int mini = INT_MAX;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] < mini)
            {
                mini = arr[i][j];
            }
        }
    }
    return mini;
}

int main()
{
    int arr[3][3] = {
        {6, 9, -5}, {3, 24, 1}, {5, 0, 3}};
    int max_element = maxElement(arr, 3, 3);
    int min_element = minElement(arr, 3, 3);
    cout << "maximum Element : " << max_element << endl;
    cout << "minimum Element : " << min_element << endl;
    return 0;
}