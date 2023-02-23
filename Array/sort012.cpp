#include <iostream>
#include <vector>
using namespace std;

// Dutch National Flag Algorithm

void sort012(vector<int> &arr)
{
    int start = 0, mid = 0, end = arr.size() - 1;
    while (mid <= end)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[start]);
            start++;
            mid++;
        }
        else if (arr[mid] == 2)
        {
            swap(arr[mid], arr[end]);
            end--;
        }
        else
        {
            mid++;
        }
    }
}
int main()
{
    vector<int> arr{0, 2, 1, 0, 2, 1, 0, 0};
    sort012(arr);
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }
    for (auto val : arr)
    {
        cout << val << " ";
    }
}