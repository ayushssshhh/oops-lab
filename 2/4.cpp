#include <iostream>

using namespace std ; 

class{

    int roll;
    char name[25];
    int marks;

public :
    
    void input_details(){
        cout<<"\n\n\nenter student details : \n\n"<<"enter name : ";
        scanf("%[^\n]s",name);
        cout<<"enter roll : ";
        cin>>roll;
        cout<<"enter marks : ";
        cin>>marks;
    }

    void display_details(){
        cout<<"\n\n\nstudent details are :\nname : "<<name<<"\nroll :"<<roll<<"\nmarks :"<<marks;
    }
    
}s;

int main(){

    s.input_details();

    s.display_details();
    
    return 0;
}