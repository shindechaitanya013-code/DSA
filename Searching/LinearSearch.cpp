//Best Case = O(1)
//Worst Case = O(n)

#include<iostream>
using namespace std;

int LinearSearch(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int n, target;

    cout<<"Enter size of the array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"\nEnter no you want to search: ";
    cin>>target;

    int ans = LinearSearch(arr,n,target);
    cout<<"\nThe number found at index  "<<ans;

    return 0;
}
