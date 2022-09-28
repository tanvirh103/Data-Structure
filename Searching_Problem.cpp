                /// Searching ////
        // Linear Search //
/*#include<iostream>
using namespace std;
int main(){
    int array[10]={10,15,45,20,25,6,1,100,65,99};
    int item=25;
    int position=-1;
    for(int i=0;i<10;i++){
        if(array[i]==item){
            position=i;
            break;
        }
    }
    if(position==-1){
        cout<<"Item not Found"<<endl;
    }
    else{
        cout<<"Item Found on "<<position<<endl;
    }
    return 0;
}*/

        //Binary Search//
/*#include<iostream>
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
    
}*/