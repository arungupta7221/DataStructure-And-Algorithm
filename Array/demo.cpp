#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {3, 9, 5, 6};
    for (int i = 1; i <= 4; i++)
    {
        cout << arr[i - 1] << " ";
    }

    return 0;
}