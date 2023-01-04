#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T>
class SingleLinkedList{
    private:
    typedef class Node
    {
        public:
        T data;
        Node *next;
        Node(){}
        Node(T y){
            data = y;
            next =NULL;
        }
    }
    *nodePoint;
    
    nodePoint head=NULL;
    
    public:
    nodePoint getNewNode(T y){
        return new Node(y);
    } 


    void insertAtLast(T y){
        nodePoint NewNode=getNewNode(y);
        if(head==NULL){
            head=NewNode;
            return;
        }

        nodePoint temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=NewNode;
    }


    void insertAtFirst(T y){
        nodePoint NewNode=getNewNode(y);
        NewNode->next=head;
        head=NewNode;
    }

    void insertAtAnyPos(T pos,T y){
        nodePoint NewNode=getNewNode(y);
        if(pos==1){
            NewNode->next=head;
            head=NewNode;
            return;
        }
        nodePoint temp=head;
        for(int i=1;i<pos-1;i++){
            temp=temp->next;
        }
        NewNode->next=temp->next;
        temp->next=NewNode;
    }

    
    void deleteAtPos(T pos){
        if(head==NULL){
            cout<<"Nothing to Delete"<<endl;
            return;
        }
        nodePoint temp=head;
        if(pos==1){
            head=temp->next;
            delete temp;
            return;
        }
        for(int i=1;i<pos-1;i++){
            temp=temp->next;
        }
        nodePoint temp2=temp->next;
        temp->next=temp2->next;
        delete temp2;
        return;
    }

    void displayList(){
        nodePoint temp=head;
        cout<<"Single linked List is: ";
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

struct Node{
    
    int data;
    Node*prev;
    Node*next;


    Node*head;

    Node*getNewNode(int x){
    Node*NewNode=new Node();
    NewNode->data=x;
    NewNode->next=NULL;
    NewNode->prev=NULL;
    return NewNode;
    }

    void insertAtLast(int x){
        Node*NewNode=getNewNode(x);
        Node*temp=head;
        if(head==NULL){
            head=NewNode;
            return;
        }
        else{
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=NewNode;
            NewNode->prev=temp;
        }
    }

    void insertAtFirst(int x){
        Node*NewNode=getNewNode(x);
        if(head==NULL){
            head=NewNode;
            return;
        }
        else{
            head->prev=NewNode;
            NewNode->next=head;
            head=NewNode;
        }
    }

    void insertAtAnyPos(int k,int y){
        Node*NewNode=getNewNode(y);
        if(k==1){
            NewNode->next=head;
            head=NewNode;
            return;
        }
        else{
            Node*temp1=head;
            for(int i=1;i<k-1;i++){
                temp1=temp1->next;
            }
            NewNode->prev=temp1;
            NewNode->next=temp1->next;
            temp1->next=NewNode;
        }
    }
 
    void deletePos(int c){
        Node*temp=head;
        if(c==1){
            head=temp->next;
            head->prev=NULL;
            delete temp;
            return;
        }
        else{
        for(int i=1;i<c-1;i++){
            temp=temp->next;
        }
        Node*temp2;
        temp2=temp;
        temp2=temp2->next;
        Node*temp3;
        temp3=temp2;
        temp2=temp2->next;
        temp2->prev=temp;
        temp->next=temp2;
        delete temp3;
        }
    }
   

    void dispalyList(){
        Node*temp=head;
        if(head==NULL){
            cout<<"Linked is Empty"<<endl;
            return ;

        }
        else{
            cout<<"Double Linked List is: "<<" ";
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
    }

};

class Node1{
    public:
    int data;
    Node1*head;
    Node1(int n){
       this->data=n;
       this->head=NULL;
    }
};
class Stack{
    Node1*top;
    public:
    Stack(){
        top=NULL;
    }
    void push(int data){
        Node1*temp=new Node1(data);
        if(!temp){
            cout<<"Stack is Full"<<endl;
            exit(1);
        }
        temp->data=data;
        temp->head=top;
        top=temp;
    }
    bool isEmpty(){
        return top==NULL;
    }
   
    void pop(){
        Node1*temp;
        if(top==NULL){
            cout<<"Stack is Empty"<<endl;
            exit(1);
        }
        else{
            temp=top;
            top=top->head;
            free(temp);
        }
    }
    void getTop(){
        if(!isEmpty()){
            cout<<"Top Element: "<<top->data; 
        }
        else{
            exit(1);
        }
    }
    
};

struct QNode{
    int data;
    QNode*next;
    QNode(int d){
        data=d;
        next=NULL;
    }
};

struct Queue{
    QNode*front,*rear;
    Queue(){
        front=NULL;
        rear=NULL;
    }

    void enqueue(int x){
        QNode*temp=new QNode(x);
        if(rear==NULL){
            front=temp;
            rear=temp;
            return;
        }
        rear->next=temp;
        rear=temp;
    }

    void dequeue(){
        if(front==NULL)
            return;
        
        QNode*temp=front;
        front=front->next;
        if(front==NULL)
            rear=NULL;

        delete(temp);
    }
};

struct BSTNode{
    int data;
    BSTNode*left;
    BSTNode*right;
};
BSTNode*root;
BSTNode*BstGetNewNode(int data){
    BSTNode*NewNode=new BSTNode();
    NewNode->data=data;
    NewNode->left=NULL;
    NewNode->right=NULL;
    return NewNode;
}
void displayPreorder(BSTNode*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
   
    displayPreorder(root->left);
    displayPreorder(root->right);
}

void displayInOrder(BSTNode*root){
    
     if(root==NULL){
        return;
    }
    displayInOrder(root->left);
    cout<<root->data<<" ";
    
    displayInOrder(root->right);

}

void displayPostorder(BSTNode*root){
   
    if(root==NULL){
        return;
    }
    displayPostorder(root->left);
    displayPostorder(root->right);
    cout<<root->data<<" ";
}

BSTNode* insertIntoBST(BSTNode*root,int data){
    if(root==NULL){
        root=BstGetNewNode(data);
    }
    else if(data<=root->data){
        root->left=insertIntoBST(root->left,data);
    }
    else{
        root->right=insertIntoBST(root->right,data);
    }
    return root;
}

bool searchInBST(BSTNode*root,int data){
    if(root==NULL){
        return false;
        cout<<"Tree is Empty"<<endl;
        
    }
    else if(root->data==data){
        return true;
    }
    else if(data<=root->data){
        return searchInBST(root->left,data);
    }
    else{
        return searchInBST(root->right,data);
    }
}