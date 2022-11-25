#include<iostream>
using namespace std;
class Queue{
    int maxLength;
    int front,rear;
    int queue[5];
    public:
    Queue(){
        maxLength=5;
        front=-1;
        rear=-1;
    }
    bool isFull(){
        if(front==0 && rear==maxLength-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isEmpty(){
        if(front==-1){
            return true;
        }
        else{
            return false;
        }
    }
    void enqueue(int value){
        if(isFull()){
            cout<<"Queue is full"<<endl;
        }
        else{
            if(front==-1){
                front=0;
            }
            rear++;
            queue[rear]=value;
        }
    }
    void dequeue(){
        
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
            
        }
        else{
         
           if(front>=rear){
            front=-1;
            rear=-1;
           }
           else{
            front++;
           }
        }
    }
    void display(){
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
        }
        else{
            for(int i=front;i<=rear;i++){
                cout<<queue[i]<<"\t";
            }
        }
    }

    
};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(231);
    q.enqueue(5);
    

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();
}