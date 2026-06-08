#include<iostream>
using namespace std;

int A[100];

int partition(int low, int high){
    int pivot = A[low];
    int left = low + 1;
    int right = high;

    while(left <= right){
        while(A[left] <= pivot)
                left++;

        while(A[right] > pivot)
                right--;

        if(left < right){
            int temp = A[left];
            A[left] = A[right];
            A[right] = temp;
        }
    }
    int temp = A[low];
    A[low] = A[right];
    A[right] = temp;

    return right;
}

void quicksort(int low, int high){
    if(low < high){
        int p = partition(low, high);

        quicksort(low, p-1);
        quicksort(p+1, high);
    }
}

int main(){
    int n;

    cout<<"Enter number of elements: ";
    cin>>n;

    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }

    quicksort(0,n-1);

    cout<<"Sorted Array: ";
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }

    return 0;
}