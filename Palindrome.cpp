#include<iostream>
using namespace std;

int main(){
    string str;
    int flag = 1;

    cout<<"Enter a String: ";
    cin>> str;

    int len = str.length();

    for(int i=0; i<len/2; i++){
        if(str[i] != str[len - 1 - i]){
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        cout<<"Palindrome String";
    else
        cout<<"Not a Palindrome String";

    return 0;
}