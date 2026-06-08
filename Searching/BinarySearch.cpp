#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int target){
    int start = 0, end = n-1;

    while(start <= end){
        int mid = (start + end)/ 2;

        if(arr[mid] == target){
            return mid;   
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}

int main(){
    int n, target;

    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"\nEnter no you want to search: ";
    cin>>target;

    int ans = BinarySearch(arr,n,target);
    cout<<"\nThe no found at index: "<<ans;

    return 0;
}