#include<iostream>
using namespace std;

void BubbleSort(int a[], int n){
    for(int i = 0; i < n-1; i++){
        int exch = 0;
        for(int j = 0; j < n-i-1; j++){
            if(a[j] > a[j+1]){   //for descending change > to <
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                exch++;
            }
        }
        if(exch == 0)
            break;
    }
}

int main(){
    int n = 5;
    int a[n];

    cout << "Enter elements in array:\n";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    BubbleSort(a, n);

    cout << "Sorted array:\n";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}
