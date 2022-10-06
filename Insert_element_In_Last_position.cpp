			///Insert Element In last Position///

#include<iostream>
using namespace std;
int main(){
	int element,sizeOfArray;
	cout<<"Enter your Array size: ";
	cin>>sizeOfArray;
	int array[sizeOfArray];
	cout<<"Enter your Array element:"<<endl;
	int i=0;
	while (i<sizeOfArray)
	{
		cin>>array[i];
		i++;
	}
	
	
	cout<<"Enter element you want to insert in Last position: ";
	cin>>element;
	array[sizeOfArray]=element;
	sizeOfArray+=1;			//sizeOfArray=sizeOfArray+1//
	cout<<"After Insertion:"<<endl;

	for(int i=0;i<sizeOfArray;i++){
		cout<<array[i]<<"\t";
	}
	return 0;
}