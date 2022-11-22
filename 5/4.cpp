#include <iostream>
#include <stdlib.h>

using namespace std;

class stud{
    public :
    int roll;
    char name[25];
    int marks;
    float avg;

    friend float avg(stud s[] , int n);

    void input(){
        cout<<"\nroll : ";
        cin>>roll;
        cout<<"name : ";
        scanf("\n%[^\n]s",&name);
        cout<<"enter total marks of an student : ";
        cin>>marks;
    }

    void dis(){
        cout<<"\nroll : "<<roll<<endl<<"name : "<<name<<endl<<"total marks : "<<marks<<endl;
    }
};

float avg(stud s[] , int n){
    float sum = 0;
    for(int i=0 ; i<n ; i++){
        sum += s[i].marks;
    }

    sum /= n;

    return sum;
}
int main(){
    int n;
    cout<<"enter no. of student : ";
    cin>>n;
    class stud s[n];

    cout<<"\n\n--------------------enter student details---------------------\n\n";
    for(int i=0 ; i<n ; i++){
        cout<<"\nstudent "<<i+1;
        s[i].input();
    }

    cout<<"\n\n--------------------student details are---------------------\n\n";
    for(int i=0 ; i<n ; i++){
        cout<<"\nstudent "<<i+1;
        s[i].dis();
    }

    float c = avg(s , n);
    cout<<endl<<c;

    for(int i=0 ; i<n ; i++)
    s[i].avg = c;
    
    return 0;
}