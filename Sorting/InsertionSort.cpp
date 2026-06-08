#include<iostream>
using namespace std;

void InsertionSort(int a[], int n){
    for(int i=1; i<n; i++){
        int temp = a[i];
        int j = i - 1;

        while(j >= 0 && a[j] > temp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}

int main(){
    int n = 5;
    int a[n];

    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    InsertionSort(a,n);

    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    return 0;
}