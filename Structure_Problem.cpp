                ///Structure////
/*#include<iostream>
using namespace std;
struct Student
{
    int id;
    string name;
    double cgpa;
    char gender;
    int creditComplete;
    string departmnet;
    public:
    bool checkProbation(){
        if(cgpa<2.5){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Student s[5];
    for(int i=0;i<5;i++){
        cout<<"Enter Your ID: ";
        cin>>s[i].id;
        cout<<"Enter Your Nick Name: ";
        cin>>s[i].name;
        cout<<"Enter Your CGPA: ";
        cin>>s[i].cgpa;
        cout<<"Enter Your Gender M or F: ";
        cin>>s[i].gender;
        cout<<"Enter Your Completed Credit: ";
        cin>>s[i].creditComplete;
        cout<<"Enter Your Department: ";
        cin>>s[i].departmnet;
        cout<<endl;


    }
    cout<<"Name of Probation Student"<<endl;
    for(int i=0;i<5;i++){
        if(s[i].checkProbation()==true){
            cout<<s[i].name<<endl;
        }
    }

    return 0;
}*/


/*#include<iostream>
using namespace std;
struct Book
{
    string isbn;
    string title;
    string authorName;
    int publicationYear;
    double price;
    int noOfPages;

    public:
    bool checkOldBook(){
        if(publicationYear<1950){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Book b[5];
    for(int i=0;i<5;i++){
        cout<<"Enter Book's ISBN: ";
        cin>>b[i].isbn;
        cout<<"Enter Book's Title: ";
        cin>>b[i].title;
        cout<<"Enter Book's Author Name: ";
        cin>>b[i].authorName;
        cout<<"Enter Book's Publication year like (1963): ";
        cin>>b[i].publicationYear;
        cout<<"Enter Book's Price: ";
        cin>>b[i].price;
        cout<<"Enter Book's Page Number: ";
        cin>>b[i].noOfPages;
        cout<<endl;
    }
    cout<<"Title of Old Book"<<endl;
    for(int i=0;i<5;i++){
        if(b[i].checkOldBook()==true){
            cout<<b[i].title<<endl;
        }
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
struct Mobile{
    string manufacturerName;
    string modelName;
    int ram;
    int rom;
    double cameraPixel;
    double price;

    public:
    bool isForGaming(){
        if(ram>6){
            return true;
        }
        else {
            return false;
        }
    }
};

int main(){
    Mobile m[5];
    for(int i=0;i<5;i++){
        cout<<"Enter Mobile's Manufacturer Name: ";
        cin>>m[i].manufacturerName;
        cout<<"Enter Mobile's Model Name: ";
        cin>>m[i].modelName;
        cout<<"Enter Mobile's ram: ";
        cin>>m[i].ram;
        cout<<"Enter Mobile's rom: ";
        cin>>m[i].rom;
        cout<<"Enter Mobile's Camera Pixel: ";
        cin>>m[i].cameraPixel;
        cout<<"Enter Mobile's Price: ";
        cin>>m[i].price;
        cout<<endl;
    }
    cout<<"List of Gaming Phone:"<<endl;
    for(int i=0;i<5;i++){
        if(m[i].isForGaming()==true){
            cout<<"Manufacturer Name: "+m[i].manufacturerName<<endl;
            cout<<"Model Name: "+m[i].modelName<<endl;
            cout<<endl;
        }

    }
    return 0;
}*/

/*#include<iostream>
using namespace std;
struct Teacher{
    int id;
    string name;
    double salary;
    string designation;
    string department;
    string L="Lecturer";

    public:
    bool isLecturer(){
        if(designation==L){
            return true;
        }
        else {
            return false;
        }
    }

};

int main(){
    Teacher t[5];
    for(int i=0;i<5;i++){
        cout<<"Enter Teacher's ID: ";
        cin>>t[i].id;
        cout<<"Enter Teacher's Name: ";
        cin>>t[i].name;
        cout<<"Enter Teacher's Salary: ";
        cin>>t[i].salary;
        cout<<"Enter Teacher's Designation Like (Lecturer): ";
        cin>>t[i].designation;
        cout<<"Enter Teacher's Department: ";
        cin>>t[i].department;
        cout<<endl;
    }
    cout<<"List of Lecturer:"<<endl;
    for(int i=0;i<5;i++){
        if(t[i].isLecturer()==true){
            cout<<t[i].name<<endl;
        }
    }
    return 0;
}*/