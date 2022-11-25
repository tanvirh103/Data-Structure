#include<iostream>              //Single Linked List//
using namespace std;

class Node{
    public:
    int value;
    Node* next;
    Node(){
        value=0;
        next=NULL;
    }
};
class LinkedList{
    public:
    Node* head;
    Node* tail;
    LinkedList(){
        head=NULL;
        tail=NULL;
    }
    void Add(int x){
        Node* n=new Node();       //Newly inserted node=n here//
        n->value=x;
        if(head==NULL){
            head=n;
            tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
    }

    void Print(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->value<<"\t";
            temp=temp->next;
        }
    }


};

int main(){
    LinkedList l;
    l.Add(5);
    l.Add(6);
    l.Add(10);
    l.Print();
}