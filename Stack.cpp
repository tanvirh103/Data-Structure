#include<iostream>
using namespace std;
class Stack{
    int top;
    int maxLength;
    int stack[5];
    
    public:
    Stack(){
        top=0;
        maxLength=5;
    }
    void pop(){
        if(top>0){
            top--;
        }
        else{
            cout<<"stack is Empty"<<endl;
        }
    }
    void getTop(){
        if(top>0){
            cout<<"Top Element: "<<stack[top-1]<<endl;
        }
        else{
            cout<<"stack Empty"<<endl;
        }
    }
    void push(int value){
        if(top<maxLength){
            stack[top]=value;
            top++;
        }
        else{
            cout<<"Stack full"<<endl;
        }
    }
    void print(){
        for(int i=0;i<top;i++){
            cout<<stack[i]<<"\t";
        }
        cout<<endl;
    }
};

int main(){
 Stack s=Stack();
    s.push(5);
    s.push(4);
    s.push(7);
    s.push(9);
    s.push(12);
        
    s.getTop();
    s.print();
    s.pop();
    s.getTop();

    s.print();

}