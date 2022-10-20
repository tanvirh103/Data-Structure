            /// 2D Array///
            //Sum of All Element//
/*#include<iostream>
using namespace std;
int main(){
    int array[3][3]={12,5,8,6,7,4,18,9,2};
    int sum=0;
    for(int r=0;r<3;r++){
        for(int c=0;c<3;c++){
            sum+=array[r][c];
        }

    }
    cout<<"Sum of All Element: "<<sum<<endl;
    return 0;
}*/
            //Sum of 2 array and store the result in another 2d array//
/*#include<iostream>
using namespace std;
int main(){
    int array1[3][3]={12,5,8,6,7,4,18,9,2};
    int array2[3][3]={2,8,18,16,14,5,8,19,12};
    int sarray[3][3];
    for(int r=0;r<3;r++){
        for(int c=0;c<3;c++){
            sarray[r][c]=array1[r][c]+array2[r][c];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<sarray[i][j]<<" ";
        }
        cout<<endl;
    }
}*/
                //Sum Of boundary Element//
/*#include<iostream>
using namespace std;
int main(){
    int array[4][4]={12,5,8,10,6,7,4,11,18,9,2,1,20,3,15,13};
    int sum=0;
    for(int r=0;r<4;r++){
        for(int c=0;c<4;c++){
            if(r==0||r==4-1||c==0||c==4-1)
            {
                sum+=array[r][c];
            }

        }
    }
    cout<<"Sum of Boundary Element: "<<sum<<endl;
    return 0;
}*/

            //Even Number of 2D Array//

/*#include<iostream>
using namespace std;
int main(){
    int array[4][4]={12,5,8,10,6,7,4,11,18,9,2,1,20,3,15,13};
    for(int r=0;r<4;r++){
        for(int c=0;c<4;c++){
            if(array[r][c]%2==0)
            {
                cout<<array[r][c]<<" ";
            }

        }
    }
    return 0;
}*/
 
            //Print Odd Element of 2D Array//
 
/*#include<iostream>
using namespace std;
int main(){
    int array[4][4]={12,5,8,10,6,7,4,11,18,9,2,1,20,3,15,13};
    for(int r=0;r<4;r++){
        for(int c=0;c<4;c++){
            if(array[r][c]%2!=0)
            {
                cout<<array[r][c]<<" ";
            }

        }
    }
    return 0;
}*/


            //Sum of  non boundary Element//

/*#include<iostream>
using namespace std;
int main(){
    int array[4][4]={12,5,8,10,6,7,4,11,18,9,2,1,20,3,15,13};
    int sum=0;
    for(int r=0;r<4;r++){
        for(int c=0;c<4;c++){
            if(r!=0&&r!=4-1&&c!=0&&c!=4-1){
                sum+=array[r][c];
            }
        }
    }
    cout<<"sum Of Non Boundary Element is: "<<sum<<endl;
    return 0;
}*/

                    //Sum of Diagonal Element//


/*#include<iostream>
using namespace std;
int main(){
    int array[5][5]={12,5,6,10,18,6,7,4,11,21,18,8,2,1,31,20,3,15,13,28,30,3,35,23,29};
    int sum=0;
    for(int r=0;r<5;r++){
        for(int c=0;c<5;c++){
            if(r==c||r+c==4){
                sum+=array[r][c];
            }
        }
    }
    cout<<"Sum of Diagonal Element: "<<sum<<endl;
    return 0;
}*/

                //Transpose matrix of a 2D array//
                
/*#include<iostream>
using namespace std;
int main(){
    int array[5][4]={12,5,8,10,6,7,4,11,18,9,2,1,20,3,15,13,30,21,35,23};
    int A_T[4][5];
    for(int r=0;r<5;r++){
        for(int c=0;c<4;c++){
            A_T[c][r]=array[r][c];
        }
    }
    cout<<"After Transpose:"<<endl;
    for(int r=0;r<4;r++){
        for(int c=0;c<5;c++){
            cout<<A_T[r][c]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

            /* Draw the patern  XOXOXOXO
                                OXOXOXOX*/

/*#include<iostream>
using namespace std;
int main(){
    for(int column=0;column<8;column++){
        for(int row=0;row<8;row++){
            if((column+row)%2==0){
                cout<<"X";
            }
            else{
                cout<<"O";
            }
        }
        cout<<endl;
    }
}*/