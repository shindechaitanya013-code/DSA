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

    int maxDiff = arr[1] - arr[0];

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] - arr[i] > maxDiff){
                maxDiff = arr[j] - arr[i];
            }
        }
    }

    cout<<"Maximum Difference = "<<maxDiff;

    return 0;
}