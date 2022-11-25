#include <iostream>
#include <string>
using namespace std;

class Stack {
    int top; 
    int arr[100]; 
    int maxsize; 

    public:
    Stack(){
        maxsize = 100;
        top = 0;
    }
    void push(int element){
        if(top < maxsize){
            arr[top] = element;
            top++;
        }
        else{
            cout << "Stack is Full"<<endl;
        }
    }
    bool isFull(){
        if(top < maxsize){
            return false;
        }
        return true;
    }
    int topIndex(){
        return top;
    }
    int topElement(){
        if(top > 0)
            return arr[top-1];
        else cout <<"Stack empty"<<endl;
    }
    void pop(){
        if(top>0) top--;
        else cout<<"Can't pop stack empty" <<endl;
    }
    void show(){
        for(int i=0;i<top;i++){
            cout<<arr[i] << " ";
        }
        cout <<endl;
    }
};


int main()
{
    string postfix = "26*41-/536+*+";
    Stack s; 
    //stack is for integers//
    //postfix.push_back(')');
    for(int i=0;i<postfix.length();i++){

        char ch = postfix[i];
        if(ch>=48 && ch <=57){
            s.push(ch-48);
        }
        else{
            int op2 = s.topElement();
            s.pop();
            int op1 = s.topElement();
            s.pop();
            int result;
            if(ch=='+'){
                result = op1 + op2;
            }
            else if(ch == '-'){
                result = op1 - op2;
            }
            else if(ch == '*'){
                result = op1 * op2;
            }
            else if(ch == '/'){
                result = op1 / op2;
            }
            s.push(result);
        }
    }
    cout << "Result is : "<< s.topElement();

    return 0;
}
