#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter a number: ";
    cin>>n;

    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            cnt++;
        }
    }

    if(cnt == 2)
        cout<<n <<" is a prime Number.";
    else
        cout<<n <<" is not a prime number.";


    return 0;
}
