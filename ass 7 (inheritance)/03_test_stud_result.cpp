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

class test : protected student{

protected :
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

class result : protected test{
protected :
    int t_m = 0;
    float per;

public :
    result(){
        for(int i=0 ; i<5 ; i++)
        t_m = t_m + m[i];

        per = t_m/5;
    }

    void dis(){
        cout<<"\n\n------student details-------\nROLL : "<<roll<<"\nAGE : "<<age<<"\nNAME : "<<name;
       // test::dis();
        cout<<"\nmarks in 5 subjects are : ";
        for(int i=0 ; i<5 ; i++){
            cout<<m[i]<<" ";
        }

        cout<<"\ntoltal marks : "<<t_m<<"\npercentage : "<<per<<"%";
    }
};

int main(){
    result r1;
    r1.dis();

    return 0;
}

//Ayush 1 19 90 89 78 93 71

