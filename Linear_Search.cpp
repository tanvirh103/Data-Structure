        // Linear Search //
#include<iostream>
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
}

