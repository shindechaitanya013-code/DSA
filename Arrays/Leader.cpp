#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Leader are: ";
    for(int i=0; i<n; i++){
        int j;
        for(j=i+1; j<n; j++){
            if(arr[j] > arr[i]){
                break;
            }
        }

        if(j == n){
            cout<<arr[i] <<" ";
        }
    }

    return 0;
}