#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr1[n], arr2[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    // Copy elements
    for(int i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    cout << "Copied array elements are: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}
