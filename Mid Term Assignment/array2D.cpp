#include<iostream>
#include"header.h"
using namespace std;

int main(){
    int row,column;
    cout<<"Enter your row: ";
    cin>>row;
    cout<<"Enter your column: ";
    cin>>column;
    int array[row][column];
    input2Darray((int*)array,row,column);
    print2Darray((int*)array,row,column);
    reversePrint2DArray((int*)array,row,column);
    int searchKey;
    cout<<"Enter your Searching key: ";
    cin>>searchKey;
    searchIn2Darray((int*)array,row,column,searchKey);
    findMax2DArray((int*)array,row,column);
    findMin2DArray((int*)array,row,column);
    int destinationArray[row][column];
    copy2DArray((int*)array,(int*)destinationArray,row,column);
}