#include <iostream>

using namespace std;

class v{
public :
    char type[25];

    v(){
        cout<<"\nenter the vechile : ";
        cin>>type;
    }

    virtual void dis(){
        cout<<"\n\n\n---------vechile detail---------\nvechile type : ";
    }
};

class car : protected v{
    char name[25];
    float mileage;
    float speed;

public : 
    car(float x , float s){
        cout<<"\nenter name of the car  : ";
        cin>>name;
        mileage = x;
        speed = s;
    }

    void dis(){
        v::dis();
        cout<<"\ncar name  : "<<name<<"\nmilegae : "<<mileage<<"\nspeed : "<<speed;
    }

    void operator -(){
        try{
            if(speed == 0){
                throw speed;
            }

            else
                cout<<"\nspeed is fine";
        }

        catch(float x){
            cout<<"\nthe speed cant be "<<speed;
        }
    }

    friend void operator <<(car a , car b);
};

void operator <<(car a , car b){
    if(a.speed < b.speed){
        cout<<"\ncar b is faster than car a";
    }

    else if(a.speed > b.speed){
        cout<<"\ncar a is faster than car b";
    }

    else{
        cout<<"\nboth car has same speed";
    }
}

int main(){
   
    car a(220 , 18.4) , b(170 , 12.3) ,d(0 , 0);
    a.dis();
    b.dis();
   // n = &a;
    a<<b;
    -d;
    return 0;
}



