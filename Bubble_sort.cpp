                /// Bubble Sort //

#include<iostream>
using namespace std;
int main(){

    int sizeOfArray;
    cout<<"Enter your Array size: ";
    cin>>sizeOfArray;
    int array[sizeOfArray];
    cout<<"Enter your array element:"<<endl;
    for(int i=0;i<sizeOfArray;i++){
        cin>>array[i];
    }

    for(int i=0;i<sizeOfArray;i++){
        for(int j=i+1;j<sizeOfArray;j++){
            if(array[i]>array[j]){
                int temp;
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }

    ///Print Bubble sorted array//
    cout<<"After Sorted:"<<endl;
    for(int i=0;i<sizeOfArray;i++){
        cout<<array[i]<<"\t";
    }
    return 0;
}