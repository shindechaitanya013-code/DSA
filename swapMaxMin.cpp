#include<iostream>
using namespace std;

void swapMaxMin(int arr[], int size){
    int maxIndex = 0;
    int minIndex = 0;

    for(int i=0; i<size; i++){
        if(arr[i] > arr[maxIndex]){
            maxIndex = i;
        }

        if(arr[i] < arr[minIndex]){
            minIndex = i;
        }
    }

    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}

int main(){
    int arr[] = {4, 9, 6, 1, 5};
    int size = 5;

    swapMaxMin(arr, size);

    cout <<"Array after swapping max and min: ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
