#include<iostream>
using namespace std;

#define MAXSIZE 6
int queue[MAXSIZE];

int front = -1;
int rear = -1;

void Insert(int ele){
    if(rear == MAXSIZE-1){
        cout<<"Queue is full\n";
    }
    else{
        if(front == -1){
            front = 0;
        }

        rear++;
        queue[rear] = ele;
        cout<<ele<<" Inserted into queue\n";
    }
}

void Delete(){
    if(front == -1){
        cout<<"Queue is empty\n";
    }
    else{
        cout<<queue[front]<<" deleted from queue\n";

        if(front == rear){
            front = rear = -1;
        }
        else{
            if(front == MAXSIZE-1)
                front = 0;
            else
                front++;
        }
    }
}

void display(){
    if(front == -1){
        cout<<"Queue is empty\n";
    }
    else{
        if(front <= rear){
            cout<<"Queue elements are: \n";
            for(int i=front; i<=rear; i++){
                cout<<queue[i]<<" ";
            }
            cout<<endl;
        }
    }
}

int main(){
    int ele, choice;

    while(true){
        cout<<"\n1.Insert\n2.Delete\n3.Display\n4.Exit\n";
        cin>>ch;

        switch(choice){
            case 1: cout<<"Enter a element: ";
                    cin>>ele;
                    Insert(ele);
                    break;
            case 2: Delete();
                    break;
            case 3: display();
                    break;
            case 4: return 0;

            default:
                    cout<<"Invalid Choice";
        }

    }
    return 0;
}
