                    ///Insertion Sort///

#include<iostream>
using namespace std;
int main(){
    
    int sizeOfArray,i,j,key;
    cout<<"Enter your array size: ";
    cin>>sizeOfArray;
    
    int array[sizeOfArray];
    cout<<"Enter your Array element:"<<endl;
    for(int i=0;i<sizeOfArray;i++){
        cin>>array[i];
    }
    
    //Sifting Element///
    for(i=1;i<sizeOfArray;i++){
        key=array[i];
        j=i-1;
        while(j>=0 && array[j]>key){
            array[j+1]=array[j];
            j=j-1;
        }
        array[j+1]=key;
    }
    
    cout<<"After sorting:"<<endl;
    for(int i=0;i<sizeOfArray;i++){
        cout<<array[i]<<"\t";
    }

    return 0;
}