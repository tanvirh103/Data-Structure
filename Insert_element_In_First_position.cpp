			///Insert Element in First position///
#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter Your array size: ";
	cin>>size;
	int array[size];
	cout<<"Enter Your Array Element: "<<endl;
	for(int i=0;i<size;i++){
		cin>>array[i];
	}
	int element;
	cout<<"Enter element you want to insert in first position: ";
	cin>>element;
	size++;

	//Shifting array element//
	for(int i=size-1;i>0;i--){
		array[i]=array[i-1];
	}
	array[0]=element;
	cout<<"After Insertion:"<<endl;
	for(int i=0;i<size;i++){
		cout<<array[i]<<" ";
	}
	return 0;
}
