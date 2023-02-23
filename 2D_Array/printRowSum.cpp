#include <iostream>
using namespace std;
int main()
{

    int arr[3][3] = {
        {6, 9, 5}, {3, 2, 1}, {5, 6, 3}};
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[j][i];
        }
        cout << sum << endl;
    }
    return 0;
}