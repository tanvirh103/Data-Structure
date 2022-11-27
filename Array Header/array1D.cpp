#include<iostream>
#include"myheader.h"
using namespace std;
int main(){
    int size;
    cout<<"Enter your Array size: ";
    cin>>size;
    int array[size];
    input1DArray(array,size);
    print1DArray(array,size);
    reversePrint1DArray(array,size);
    int searchKey;
    cout<<"Enter Element you are searching: ";
    cin>>searchKey;
    searchIn1DArray(array,size,searchKey);
    findMax1DArray(array,size);
    findMin1DArray(array,size);
    int destinationArray[size];
    copy1DArray(array,destinationArray,size);
    sort1DArray(array,size);
    
}