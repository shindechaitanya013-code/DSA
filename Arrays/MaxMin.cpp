#include<iostream>
using namespace std;

int main(){
    int nums[] = {10, 5, 77, -15, 40, 2};
    int size = 6;

    int smallest = nums[0];
    int largest = nums[0];

    for(int i = 1; i < size; i++){

        if(nums[i] < smallest){
            smallest = nums[i];
        }

        if(nums[i] > largest){
            largest = nums[i];
        }
    }

    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;

    return 0;
}