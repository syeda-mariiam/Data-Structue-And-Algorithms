
#include<iostream>
using namespace std;

int main()
{
    int arr[100] = {12, 24, 36, 48, 60, 72};

    cout << "Elements before insertion" << endl;

    for(int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    for(int i = 6; i >= 3; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[3-1] = 100;

    cout << "Elements after insertion" << endl;

    for(int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}

