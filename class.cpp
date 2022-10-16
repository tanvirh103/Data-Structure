/*#include<iostream>
using namespace std;
struct Student{
string name;
string id;
float cgpa;
bool isScholarship(){
if(cgpa>=3.75){
    return true;

}
else{
    return false;
}
}
};
int main(){
Student s[2];
for(int i=0;i<2;i++){
    cin>>s[i].name;
    cin>>s[i].id;
    cin>>s[i].cgpa;

}
cout<<"Your info:"<<endl;
for(int i=0;i<2;i++){
    cout<<endl;
    cout<<s[i].name<<endl;
    cout<<s[i].id<<endl;
    cout<<s[i].cgpa<<endl;
    cout<<endl;
}
cout<<"Scholarship result:"<<endl;
for(int i=0;i<2;i++){
     if(s[i].isScholarship()==true){
        cout<<s[i].name<<endl;
    }
}
}
*/
/*#include<iostream>
#include<string.h>
using namespace std;
void encode(string& st,int j){
for(int i=0;i<st.length();i++){
    if(st[i]!=' '){
        st[i]+=j;
    }
}
}
int main(){
string s;
cout<<"Enter your String:";
getline(cin,s);
cout<<"Size:";
int j;
cout<<"Increase: ";
cin>>j;
encode(s,j);
cout<<endl;
cout<<"After Encode"<<endl;
cout<<s<<endl;
}*/

#include<iostream>
using namespace std;
void Reverse(string *s){
int length,End,Start;
length=s.length();
End=length-1;
for(int i=length;i>=0;i--){
    if(s[i]==32||i==0){
        if(i==0){
            Start=0;
        }
        else{
            Start=i+1;
        }
        for(int j=start)
    }
}


}
