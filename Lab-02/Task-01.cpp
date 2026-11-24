
#include<iostream>
using namespace std;

int main()
{
    int arr[100] = {12, 24, 36, 48, 60, 72};

    cout << "Elements before deletion" << endl;

    for(int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    for(int i = 4-1; i < 6-1; i++)
    {
        arr[i] = arr[i+1];
    }

    cout << "Elements after deletion" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}

