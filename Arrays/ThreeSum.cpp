#include<iostream>
using namespace std;

int main(){
    int n, sum;

    cout<<"Enter size of the array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter target: ";
    cin>>sum;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i] + arr[j] + arr[k] == sum){
                    cout<<arr[i] <<" " <<arr[j] <<" "<<arr[k];
                    return 0;
                }
            }
        }
    }

    cout<<"No triplet found";

    return 0;
}