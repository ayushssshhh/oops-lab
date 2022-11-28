#include <iostream>

using namespace std;

class fraction{
    float a;
    float b;
    float f;

public :
    void get_data(){
        cout<<"\nenter fraction : ";
        cin>>a>>b;
        f = a/b;
    }

    void display(){
        cout<<"\nthe fraction is "<<a<<"/"<<b;
    }

    friend void operator ==(fraction f1 , fraction f2);

    
};

void operator ==(fraction f1 , fraction f2){
        cout<<"\nthe greates fraction is  : ";
        if(f1.f > f2.f)
        cout<<f1.a<<"/"<<f2.b;

        else if(f1.f < f2.f)
        cout<<f2.a<<"/"<<f2.b;

        else
        cout<<"\nboth fraction are equal";


    }

int main(){
    fraction f , f2;

    f.get_data();
    f.display();

    f2.get_data();
    f2.display();

    f==f2;    
    return 0;
}

