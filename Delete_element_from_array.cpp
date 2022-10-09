            ///Delete element from an array///

#include<iostream>
using namespace std;
int main(){
    int sizeOfArray,element;
    cout<<"Enter your Array size:";
    cin>>sizeOfArray;

    int array[sizeOfArray];
    cout<<"Enter your Array Element:"<<endl;
    for(int i=0;i<sizeOfArray;i++){
        cin>>array[i];
    }
    cout<<"Enter Element you want to delete: ";
    cin>>element;

    int position=-1;
    for(int i=0;i<sizeOfArray;i++){
        if(array[i]==element){
            position=i;
        }
    }
    ///Shiftinng Element///
    for(int i=position;i<sizeOfArray;i++){
        array[i]=array[i+1];
    }
    sizeOfArray-=1;

    cout<<"After delete operation:"<<endl;
    for(int i=0;i<sizeOfArray;i++){
        cout<<array[i]<<"\t";
    }
    return 0;
}