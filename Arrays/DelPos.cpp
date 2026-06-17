#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter no of elements in array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int pos;
    cout<<"Enter position to delete: ";
    cin>>pos;

    for(int i=pos; i<n; i++){
        arr[i-1] = arr[i];
    }

    n--;

    for(int i=0; i<n; i++){
        cout<<arr[i] <<" ";
    }

    return 0;
}