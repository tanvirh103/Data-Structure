#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* prev;
    Node* next;
    Node(){
        value=0;
        prev=NULL;
        next=NULL;
    }
};

class DoublyLinkedList{
    public:
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head=NULL;
        tail=NULL;
    }
    void Add(int x){
        Node* ne=new Node();
        ne->value=x;
        if(head==NULL){
            head=ne;
            tail=ne;
        }
        else{
            tail->next=ne;
            ne->prev=tail;
            tail=ne;
        }
    }
    void Forward(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->value<<"\t";
            temp=temp->next;
        }
    }
    void Backward(){
        Node* temp=tail;
        while(temp!=NULL){
            cout<<temp->value<<"\t";
            temp=temp->prev;
        }
    }
};

int main(){
    DoublyLinkedList l;
    l.Add(5);
    l.Add(8);
    l.Add(19);
    l.Add(50);
    l.Forward();
    l.Backward();
}