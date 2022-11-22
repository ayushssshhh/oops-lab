#include<iostream>

using namespace std;

class time{
    int h;
    int m;

    public : 
    time(){
        h = 9;
        m = 10;
    }

    time(int a , int b = 51){
        h = a ; 
        m = b;
    }

    void dis(){
        cout<<" "<<h<<":"<<m<<endl;
    }

    ~time(){
        cout<<"\n-------------destructor invoked------------------\n";
    }
};

int main(){
    time t1; //default const
    time t2(3 , 36);  //paramaterized const
    time t3(8);//default arrgument const
    time t4 = t1;

    cout<<"\ndefault const. time : ";
    t1.dis();

    cout<<"\nparamaterized const. time : ";
    t2.dis();

    cout<<"\ndefault argumwnt const. time : ";
    t3.dis();

    cout<<"\ncopy const. time : ";
    t4.dis();

}