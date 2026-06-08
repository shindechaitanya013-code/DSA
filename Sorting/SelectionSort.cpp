#include<iostream>
using namespace std;

void selectionsort(int a[], int n){
    for(int i=0; i<n-1; i++){
        int smallIndex = i;
        for(int j = i+1; j < n; j++){
            if(a[j] < a[smallIndex]){
                smallIndex = j;
            }
        }
        int temp = a[i];
        a[i] = a[smallIndex];
        a[smallIndex] = temp;
    }
}

int main(){
    int n = 5;
    int a[n];

    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>> a[i];
    }

    selectionsort(a,n);

    cout<<"\nSorted Array: ";
    for(int i=0; i<n; i++){
        cout<< a[i] <<" ";
    }

    return 0;
}