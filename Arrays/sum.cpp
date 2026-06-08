#include<iostream>
using namespace std;

void sum(int arr[], int size){
    int sum = 0;

    for(int i=0; i<size; i++){
        sum = sum + arr[i];
    }

    cout <<"Sum = "<< sum <<endl;
}

void product(int arr[], int size){
    int product = 1;

    for(int i=0; i<size; i++){
        product = product * arr[i];
    }

    cout <<"Product of all numbers = " << product <<endl;
}

int main(){
    int arr[] = {2, 3, 4, 5, 6};
    int size = 5;

    sum(arr, size);

    product(arr, size);

    return 0;
}