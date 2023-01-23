        //Binary Search//
#include<iostream>
using namespace std;
int main(){
   
    int array[10]={1,6,10,15,20,25,45,65,99,100};
    int item=100;
    int position=-1;
    int firstIndex=0;
    int lastIndex=9;
      while(firstIndex<=lastIndex){
       
        int midIndex=(firstIndex+lastIndex)/2;
        if(array[midIndex]==item){
            position=midIndex;
            break;
        }
        if(item>array[midIndex]){
            firstIndex=midIndex+1;
        }
        if(item<array[midIndex]){
            lastIndex=midIndex-1;
        }
    }
    if(position==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found"<<endl;
    }
    
}