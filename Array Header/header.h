#include<iostream>
using namespace std;

void input2Darray(int* array,int row,int column){
    cout<<"Enter Array Element:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>*(array+i*column+j);
        }
    }
}

void print2Darray(int* array,int row,int column){
    cout<<"Print 2D Array:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<*(array+i*column+j)<<"\t";
        }
        cout<<endl;
    }
}

void reversePrint2DArray(int* array,int row,int column){
    cout<<"Reverse 2D array:"<<endl;
    for(int i=row-1;i>=0;i--){
        for(int j=column-1;j>=0;j--){
            cout<<*(array+i*column+j)<<"\t";
        }
       cout<<endl;
    }
}
void searchIn2Darray(int* array,int row,int column,int searchKey){
    bool flag=false;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(*(array+i*column+j)==searchKey){
               flag=true; 
            }

        }
    }
    if(flag==true){
        cout<<"Item found"<<endl;
    }
    else{
        cout<<"Item not found"<<endl;
    }
}

void findMax2DArray(int*array,int row,int column){
    int max=array[0];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(*(array+i*column+j)>max){
                max=*(array+i*column+j);
            }
        }
    }
    cout<<"Max Element: "<<max<<endl;
}

void findMin2DArray(int*array,int row,int column){
    int min=array[0];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(*(array+i*column+j)<min){
                min=*(array+i*column+j);
            }
        }
    }
    cout<<"Minimum Element: "<<min<<endl;
}

void copy2DArray(int*array,int* destinationArray,int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            *(destinationArray+i*column+j)=*(array+i*column+j);
        }
    }
    cout<<"After copy this Array:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<*(destinationArray+i*column+j)<<"\t";
        }
        cout<<endl;
    }
}