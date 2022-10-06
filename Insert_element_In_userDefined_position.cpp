                    ///Insert Element after User defined position///

#include<iostream>
using namespace std;
int main(){
    int item,element,sizeOfArray;
    int position=-1;
    cout<<"Enter your array size: ";
    cin>>sizeOfArray;
    int array[sizeOfArray];
    cout<<"Enter your array Element:"<<endl;
    int i=0;
    while(i<sizeOfArray){
        cin>>array[i];
        i++;
    }

    cout<<"Enter element you want to insert after: ";
    cin>>item;

    for(int i=0;i<sizeOfArray;i++){
        if(array[i]==item){
            position=i;
        }
    }
    cout<<"Enter Element you want to insert: ";
    cin>>element;
    sizeOfArray+=1;         //SizeOfArray=sizeOfArray+1;
    for(int i=sizeOfArray;i>position;i--){
        array[i]=array[i-1];
    }
    array[position+1]=element;      //Insert Element after input number//
    cout<<"After Insertion"<<endl;
    for(int i=0;i<sizeOfArray;i++){
        cout<<array[i]<<"\t";
    }
    
}