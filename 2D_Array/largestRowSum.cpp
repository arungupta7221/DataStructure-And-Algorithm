#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[3][3] = {
        {6, 9, 5}, {3, 12, 11}, {5, 6, 3}};
    int maxi = INT_MIN;
    int temp = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
            if (maxi < sum)
            {
                maxi = sum;
                temp = row;
            }
        }
    }
    cout << "max sum is " << maxi << endl;
    cout << "row no is " << temp;
    return 0;
}