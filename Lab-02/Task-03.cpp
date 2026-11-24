
#include<iostream>
using namespace std;

int main()
{
	
    int arr[100] = {12, 24, 36, 48, 60, 72};
    int value = 36;
    
    // Searching
    for(int i = 0; i < 6; i++)
    {
        if(arr[i] == value)
        {
            cout << "Value (" << value << ") is present at index " << i << endl;
        }
    }

    return 0;
}

