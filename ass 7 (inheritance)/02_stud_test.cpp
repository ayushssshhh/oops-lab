#include <iostream>

using namespace std;

class student{

protected : 
    char name[25];
    int roll;
    int age;

public :
    student(){
        cout<<"\nenter name : ";
        cin>>name;
        cout<<"\nenter roll : ";
        cin>>roll;
        cout<<"\nenter age : ";
        cin>>age;
    }
};

class test : public student{
    int m[5];

public : 

    test(){
        printf("\nenter marks for 5 subject : ");
        for(int i=0 ; i<5 ; i++)
        scanf("%d",&m[i]);
    }

    void dis(){
        cout<<"\n\n------student details-------\nROLL : "<<roll<<"\nAGE : "<<age<<"\nNAME : "<<name;

        cout<<"\nmarks in 5 subjects are : "; 
        for(int i=0 ; i<5 ; i++){
            cout<<m[i]<<" ";
        }
    }
};


int main(){
    test t1;
    t1.dis();

    return 0;
}

