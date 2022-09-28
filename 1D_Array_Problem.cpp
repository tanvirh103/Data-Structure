                    //Small Element//

/*#include<iostream>
using namespace std;
int main(){
    int array[10]={10,15,45,20,25,6,1,100,65,99};
    int small=array[0];
    int position=-1;
    for(int i=0;i<10;i++){
        if(array[i]<small){
            small=array[i];
            position=i;
        }
    }
    cout<<"Small Element: "<<small<<endl;
    cout<<"Position of Small Element: "<<position<<endl;
    return 0;
}*/
                    //Search from 1D Array//

/*#include<iostream>
using namespace std;
int main(){
    int array[10]={10,15,45,20,25,6,1,100,65,99};
    int item=65;
    int position=-1;
    for(int i=0;i<10;i++){
        if(item==array[i]){
            position=i;
            break;
        }
    }
    if(position==-1){
        cout<<"Item not found"<<endl;
    }
    else{
        cout<<"Item found in: "<<position<<endl;
    }
}*/

                    //Summation of an array//

/*#include<iostream>
using namespace std;
int main(){
    int array[10]={10,15,45,20,25,6,1,100,65,99};
    int sum=0;
    for(int i=0;i<10;i++){
        sum+=array[i];    //sum=sum+array[i];//
    }
    cout<<"Result of Sum: "<<sum<<endl;
    return 0;
}*/
                //Sum of Even Element//

/*#include<iostream>
using namespace std;
int main(){
    int array[10]={10,15,45,20,25,6,1,100,65,99};
    int sum=0;
    for(int i=0;i<10;i++){
        if(array[i]%2==0){
            sum+=array[i];
        }
    }
    cout<<"Sum of Even element: "<<sum<<endl;
    return 0;
}*/

                //Sum of Even index number//
/*#include<iostream>
using namespace std;
int main(){
    int array[10]={10,15,45,20,25,6,1,100,65,99};
    int sum=0;
    for(int i=0;i<10;i++){
        if(i%2==0){
            sum+=array[i];
        }
    }
    cout<<"Sum of Even index number: "<<sum<<endl;
    return 0;
}*/

        //Count the appearance of a particular number//

/*#include<iostream>
using namespace std;
int main(){
    int array[10]={10,15,45,20,45,6,1,100,45,99};
    int item=45;
    int count=0;
    for(int i=0;i<10;i++){
        if(array[i]==item){
            count++;
        }
    }
    cout<<"The number appeare "<<count<<" Times"<<endl;
    return 0;
}*/


            //Merge two array//
            //Input from user//

/*#include<iostream>
using namespace std;
int main(){
    int firstsize,secondsize,msize;
    cout<<"Enter your First array size:";
    cin>>firstsize;
    cout<<"Enter your 2nd array size";
    cin>>secondsize;
    msize=firstsize+secondsize;
    int array1[firstsize],array2[secondsize],marray[msize];
    cout<<"Enter your first array Element:";
    for(int i=0;i<firstsize;i++){
        cin>>array1[i];
    }
    cout<<endl;
    cout<<"Enter your 2nd array Element:";
    for(int i=0;i<secondsize;i++){
        cin>>array2[i];
    }
    cout<<endl;
    for(int k=0;k<firstsize;k++){
        marray[k]=array1[k];
    }
    for(int i=firstsize;i<msize;i++){
        marray[i]=array2[i-firstsize];
    }

        cout<<"Merged Array:";
    for(int l=0;l<msize;l++){
        cout<<marray[l]<<" ";
    }

}*/

            //Merge array by Given array//

/*#include<iostream>
using namespace std;
int main(){
    int array1[5]={40,30,70,90,100};
    int array2[7]={10,15,45,20,65,6,1};
    int marray[5+7];
    for(int i=0;i<5;i++){
        marray[i]=array1[i];
    }
    for(int i=5;i<12;i++){
        marray[i]=array2[i-5];
    }
    for(int i=0;i<12;i++){
        cout<<marray[i]<<" ";
    }
    return 0;
}*/