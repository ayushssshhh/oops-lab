#include <iostream>

using namespace std;

class employee{

protected :
    int id;
    char name[25];
    int salary;

public :
    employee(){
        cout<<"\n\n\nenter name of the employee : ";
        cin>>name;
        cout<<"\nenter employe id : ";
        cin>>id;
        cout<<"\nenter salary : ";
        cin>>salary; 
    }
};

class regular : protected employee{
    int hra;
    int da;
    int b;

public :
    regular(){
        hra = 0.5*salary;
        da = 0.1*salary;
        b = salary - da - hra;
    }

    void dis(){
        cout<<"\n\n---details of regular employee---\nname :"<<name<<"\nid : "<<id<<"\ngross salary : "<<salary<<"\nhra : "<<hra<<"\nda : "<<da<<"\nbasic salary : "<<b;
    }
};

class partTime : protected employee{
    int rate;
    int n_h;
    int b;

public :
    partTime(){
        n_h = 40;
        rate = salary/n_h;
    }

    void dis(){
        cout<<"\n\n---details of part-time employee---\nname :"<<name<<"\nid : "<<id<<"\nsalary : "<<salary<<"\nhour worked : "<<n_h<<"\npay per hour : "<<rate;
    }    
};

int main(){

    regular r1;
    r1.dis();

    partTime p1;
    p1.dis();

    return 0;
}