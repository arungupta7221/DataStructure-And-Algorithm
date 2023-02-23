#include <iostream>
using namespace std;

int main()
{
    int arr[3][5] = {
        {3, 2, 4, 57, 87}, {9, 3, 65, 78, 21}, {56, 35, 86, 13, 45}};

    cout << "Printing Row wise " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Printing Column wise " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}