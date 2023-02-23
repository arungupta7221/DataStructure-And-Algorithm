#include <iostream>
#include <vector>
using namespace std;

// Dutch National Flag Algorithm
void negativeToStart(vector<int> &arr)
{
    int start = 0, end = 0;
    while (end < arr.size())
    {
        if (arr[end] < 0)
        {
            swap(arr[end], arr[start]);
            start++;
            end++;
        }
        else
        {
            end++;
        }
    }
}
int main()
{
    vector<int> arr{-40, 81, 62, -52, 66, -20, 16, -33, -13};
    negativeToStart(arr);
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }
    for (auto val : arr)
    {
        cout << val << " ";
    }
}