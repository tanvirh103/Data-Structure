                    //String Related Problem//


                //Reverse String//             

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="I Hate Programming.";
    for(int i=str.length()-1;i>=0;i--){
        cout<<str[i];
    }
}


                //Marge two string//

#include<iostream>
#include<string>
using namespace std;
int main(){
string str="I hate Programming.";
string str1="Let's Drop the course.";
cout<<str+str1<<endl;
return 0;
}


                //Character Appears in String//

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="I hate Programming.";
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'){
            count++;
        }
    }
    cout<<"a appeared "<<count<<" times in this string"<<endl;
    return 0;
}


                //Compare Two string//

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="Hello World";
    string str1="Bye World";
    if(str==str1){
        cout<<"Same String"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }
    
    return 0;
}

                //Calculate Length of a String//

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="I hate Programming.";
    cout<<"Length of This string is: "<<str.length()<<endl;
}