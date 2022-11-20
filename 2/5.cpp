#include <iostream>

using namespace std ; 

class student{

    int roll;
    char name[25];
    int marks[10];
    int total_marks=0;
    float prec;

public :
    
    void input_details(){
        cout<<"\n\n\n---------------------------enter student details------------------------------ \n"<<"enter name : ";
        scanf("%[^\n]s",name);
        cout<<"enter roll : ";
        cin>>roll;
        for(int i=0 ; i<10 ; i++){
            cout<<"enter marks of subject "<<i+1<<" : ";
            cin>>marks[i];
            total_marks=marks[i]+total_marks;
        }
        prec=(float)total_marks/10;
    }

    void display_details(){
        cout<<"\n\n\n--------------------------student details are :--------------------------------\nname : "<<name<<"\nroll :"<<roll<<"\nmarks of student in 10 sub are :";
        for (int i=0 ; i<10 ; i++)
        cout<<"\nsub "<<i+1<<" : "<<marks[i];
        cout<<"\ntotal marks : "<<total_marks<<"\n";
        printf("percentage : %2.2f",prec);
    }
    
}s;

int main(){

    s.input_details();

    s.display_details();
    
    return 0;
}