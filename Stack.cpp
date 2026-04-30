#include<iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;

void push(int val){
    if(top == MAX-1){
        cout <<"Stack Overflow\n";
    } 
    else{
        top++;
        stack[top] = val;
        cout << val <<" Pushed into stack\n";  
    }
}

void pop(){
    if(top == -1){
        cout <<"Stack Underflow\n";
    }
    else{
        cout << stack[top] <<" popped from stack\n";
        top--;
    }
}

void peep(int pos){
    if(top - pos+1 < 0){
        cout <<"Invalid Position\n";
    }
    else{
        cout <<"Element at position " << pos << " is: " <<stack[top-pos+1] <<endl;
    }
}

void display(){
    if(top == -1){
        cout <<"Stack is empty\n";
    }
    else{
        cout <<"Stack elements are: \n";
        for(int i = top; i >= 0; i--){
            cout << stack[i] <<endl;
        }
    }
}

int main(){
    int choice, val, pos;

    while(true){
        cout <<"\n1.Push\n2.Pop\n3.Peep\n4.Display\n5.Exit\n";
        cout <<"Enter your choice: ";
        cin >>choice;
        
        switch(choice){
            case 1: cout <<"Enter Value: ";
                    cin >>val;
                    push(val);
                    break;
                    
            case 2: pop();
                    break;

            case 3: cout <<"Enter position: ";
                    cin >>pos;
                    peep(pos);
                    break;

            case 4: display();
                    break;

            default: cout <<"Invalid choice\n";
        }
    }
    return 0;
}
