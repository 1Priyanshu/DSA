#include<iostream>
#include<bits/stdc++.h>
using namespace std;

array<int,10> arr;
int front =-1, rear = -1;
int n = sizeof(arr)/sizeof(int);

bool IsEmpty(){
    if(front==-1&& rear==-1){
        return true;
    }
    else return false;
}

void EnQueue(int x){
    if((rear+1)%n==front) return;
    else if(IsEmpty()){
        front = 0;
        rear = 0;
    }
    else{
        rear = (rear+1)%n;
    }
    arr[rear] = x;
}
void DeQueue(){
    if(IsEmpty()) return;
    else if(front==rear){
        front = -1;
        rear = -1;
    }
    else {
        front = (front+1)%n;
    }
}

int main(){
    EnQueue(1);
    EnQueue(2);
    EnQueue(3);
    DeQueue();
    if(!IsEmpty()) cout<<"Queue is not empty!!"<<endl;
    else cout<<"Queue is empty!!"<<endl;
    cout<<"Queue is : ";
    for(auto i=front; i<=rear; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}