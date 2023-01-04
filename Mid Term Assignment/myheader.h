#include<iostream>
using namespace std;


void print1DArray(int array[],int size){
    cout<<"Print 1D array:"<<endl;
    for(int i=0;i<size;i++){
        cout<<array[i]<<"\t";
    }
    cout<<endl;
}

void reversePrint1DArray(int array[],int size){
    cout<<"Reverse Print 1D Array:"<<endl;
    for(int i=size-1;i>=0;i--){
        cout<<array[i]<<"\t";
    }
    cout<<endl;
}

void input1DArray(int array[],int size){
    cout<<"Enter your Array Element:"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
}


void searchIn1DArray(int array[],int size,int searchKey){
    int position=-1;
    for(int i=0;i<size;i++){
        if(array[i]==searchKey){
            position=i;
            break;
        }
    }
    if(position==-1){
        cout<<"Item Not Found"<<endl;
    }
    else{
        cout<<"Item found"<<endl;
    }
}

void findMax1DArray(int array[],int size){
    int max=array[0];
    for(int i=0;i<size;i++){
        if(max<array[i]){
            max=array[i];
        }
    }
    cout<<"Max Element: "<<max<<endl;
}

void findMin1DArray(int array[],int size){
    int min=array[0];
    for(int i=0;i<size;i++){
        if(min>array[i]){
            min=array[i];
        }
    }
    cout<<"Minimum Element: "<<min<<endl;
}

void copy1DArray(int sourceArray[],int destinationArray[],int size){
    for(int i=0;i<size;i++){
        destinationArray[i]=sourceArray[i];
    }
    cout<<"After copy your array:"<<endl;
    for(int i=0;i<size;i++){
        cout<<destinationArray[i]<<"\t";
    }
    cout<<endl;
}

void sort1DArray(int array[],int size){
    
    for(int i=0;i<size-1;i++){
        int mini=i;
       for(int j=i+1;j<size;j++){
        if(array[j]<array[mini]){
            mini=j;
        }
       }
       int smallnum=array[mini];
       array[mini]=array[i];
       array[i]=smallnum;
    }

    cout<<"After sorting:"<<endl;
    for(int i=0;i<size;i++){
        cout<<array[i]<<"\t";
    }
    cout<<endl;
    
}