#include <iostream>
using namespace std;

void adjust(int a[], int i, int n)
{
    int j = 2 * i;
    int item = a[i];

    while (j <= n)
    {
        if (j < n && a[j] < a[j + 1])
            j = j + 1;   // select larger child

        if (item >= a[j])
            break;

        a[j / 2] = a[j];
        j = 2 * j;
    }

    a[j / 2] = item;
}

void heapify(int a[], int n)
{
    for (int i = n / 2; i >= 1; i--)
        adjust(a, i, n);
}

void heapSort(int a[], int n)
{
    heapify(a, n);

    for (int i = n; i >= 2; i--)
    {
        swap(a[1], a[i]);   // move largest element to end
        adjust(a, 1, i - 1);
    }
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int a[n + 1]; // 1-based indexing

    cout << "Enter elements: ";
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    heapSort(a, n);

    cout << "Sorted array: ";
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";

    return 0;
}