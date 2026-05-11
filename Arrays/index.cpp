#include<iostream>
using namespace std;

int main(){
    int nums[] = {22, 45, -6, 87, 2};
    int size = 5;

    int smallest = nums[0];
    int index = 0;

    for(int i = 1; i < size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
            index = i;
        }
    }

    cout << "Index of Smallest = " << index << endl;

    return 0;
}
