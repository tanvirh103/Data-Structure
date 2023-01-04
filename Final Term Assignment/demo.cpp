#include<iostream>
#include "mySTL.h"
using namespace std;

int main(){
  SingleLinkedList<int>S;
    S.insertAtFirst(5);
    S.insertAtFirst(20);
    S.insertAtFirst(30);
    S.insertAtFirst(40);
    S.displayList();  

    S.insertAtLast(50); 
    S.displayList();
    S.insertAtAnyPos(2,65);
    S.displayList();
    S.deleteAtPos(2);
    S.displayList();

    cout<<endl;
    Node D;
    D.head = NULL;
    D.insertAtFirst(11);
    D.insertAtFirst(35);
    D.insertAtFirst(68);
    D.insertAtFirst(91);
    D.insertAtFirst(71);
    D.insertAtFirst(82);
    D.dispalyList();
    D.insertAtLast(64);
    D.dispalyList();
    D.insertAtAnyPos(2, 10);
    D.dispalyList();
    D.deletePos(2);
    D.dispalyList();
    D.dispalyList();
    

    cout<<endl;

    
   Stack st;
    st.push(5);
    st.push(10);
    st.push(9);
    st.pop();
    st.pop();
    st.getTop();

    cout<<endl;

    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.dequeue();
    q.dequeue();
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
   
    cout<<endl;
    cout << "Queue Front : " << (q.front)->data << endl;
    cout << "Queue Rear : " << (q.rear)->data<<endl;
    
    cout<<endl;

    root = NULL;
	  root = insertIntoBST(root, 22);
	  root = insertIntoBST(root, 15);
	  root = insertIntoBST(root, 45);
	  root = insertIntoBST(root, 70);
	  root = insertIntoBST(root, 9);
	  root = insertIntoBST(root, 34);
    root = insertIntoBST(root, 94);
    root = insertIntoBST(root, 5);
    root = insertIntoBST(root, 47);
    cout << "Enter your search item: ";
	int s;
	cin >> s;
	
	if (searchInBST(root, s) == true)
	{
		cout << "Root is found" << endl;
	}
	else
	{
		cout << "Root is Not found" << endl;
	}
    cout<<endl;
    displayPreorder(root);
    cout<<endl;
    displayInOrder(root);
    cout<<endl;
    displayPostorder(root);
     cout<<endl;
     

    
 
}