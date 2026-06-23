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

    bool palindrome = true;

    for(int i=0; i<n/2; i++){
        if(arr[i] != arr[n - 1 - i]){
            palindrome = false;
            break;
        }
    }

    if(palindrome)
        cout<<"Palindrome";
    else
        cout<<"Not Palindrome";

    return 0;
}