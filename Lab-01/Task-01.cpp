
#include <iostream>
using namespace std;

int main()
{
    int arr[4];

    cout << "Enter 4 elements: ";

    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements are: ";

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nFirst element: " << arr[0];

    cout << "\nLast element: " << arr[3];

    cout << "\nMiddle elements: " << arr[1] << " " << arr[2];

    return 0;
}

