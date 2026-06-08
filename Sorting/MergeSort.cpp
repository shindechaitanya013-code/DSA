#include<iostream>
using namespace std;

int A[100], temp[100];

void merge(int low, int mid, int high){
    int i = low;
    int j = mid+1;
    int k = low;

    while(i <= mid && j <= high){
        if(A[i] < A[j])
            temp[k++] = A[i++];
        else
            temp[k++] = A[j++];
    }

    while(i <= mid)
        temp[k++] = A[i++];

    while(j <= high)
        temp[k++] = A[j++];

    for(int i=low; i<=high; i++)
            A[i] = temp[i];
}

void mergesort(int low, int high){
    if(low < high){
        int mid = (low + high)/ 2;

        mergesort(low, mid);
        mergesort(mid+1,high);

        merge(low,mid,high);
    }
}

int main(){
    int n;

    cout<<"Enter number of elements: \n";
    cin>>n;

    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>A[i];
    }

    mergesort(0,n-1);

    cout<<endl;
    cout<<"Sorted Array: \n";
    for(int i=0; i<n; i++)
        cout<<A[i] <<" ";

    return 0;
}