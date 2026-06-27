#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int temp[n];
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            temp[index] = arr[i];
            index++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp[index] = arr[i];
            index++;
        }
    }

    cout << "Array after moving zeros to beginning: ";
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }

    return 0;
}