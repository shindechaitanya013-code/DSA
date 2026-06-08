#include<iostream>
using namespace std;

#define MAXSIZE 5

int queue[MAXSIZE];
int front = -1, rear = -1;

void Insert(int ele){
    if((front == 0 && rear == MAXSIZE-1) || (front == rear+1)){
        cout<<"Queue is full.\n";
    }
    else{
        if(rear == MAXSIZE-1){
            rear = -1;
        }

        rear++;
        queue[rear] = ele;

        if(front == -1)
            front = 0;

        cout<<ele<<" Inserted into queue\n";
    }
}

void del(){
    if(front == -1){
        cout<<"Queue is empty.\n";
    }
    else{
        cout<<"Deleted element: "<<queue[front]<<endl;

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
            for(int i=front; i<=rear; i++)
                    cout<<queue[i] <<" ";
        }
        else{
            for(int i=front; i<MAXSIZE; i++)
                    cout<<queue[i] <<" ";

            for(int i=0; i <=rear; i++)
                    cout<<queue[i] <<" ";
        }
        cout<<endl;  
    }
}

int main(){
    int ch, ele;

    while(1){
        cout<<"\n1.Insert\n2.Delete\n3.Display\n4.Exit\n";
        cin>>ch;

        switch(ch){
            case 1: cout<<"Enter element you want to insert: \n";
                    cin>>ele;
                    Insert(ele);
                    break;
            case 2: del();
                    break;
            case 3: display();
                    break;
            case 4:
                    return 0;
        }
    }
    return 0;
}