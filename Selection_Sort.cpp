            ///Selection Sort///
#include<iostream>
using namespace std;
int main(){
    int array[7]={12,56,30,21,71,25,9};
    for(int start=0;start<6;start++){
        int mini=start;
        for(int current=start+1;current<7;current++){
            if(array[current]<array[mini]){
                mini=current;
            }
        }
        int smallNum=array[mini];
        array[mini]=array[start];
        array[start]=smallNum;

    }
    for(int i=0;i<7;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}