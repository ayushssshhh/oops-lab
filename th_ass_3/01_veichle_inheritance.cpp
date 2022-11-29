#include <iostream>

using namespace std;

class vechile{
protected : 
    int milage;
    int price;

public :
    vechile(){
        cout<<"\nenter the milage and price of the vechile : ";
        cin>>milage>>price;
    }
};

class car : protected vechile{
protected : 
    int ow_pr;
    int warranty;
    int seats;
    char tank[25];

public : 
    car(){
        cout<<"\n owner cost : ";
        cin>>ow_pr;
        cout<<"\n warranty : ";
        cin>>warranty;
        cout<<"\n seating capacity : ";
        cin>>seats;
        cout<<"\n fuel type : ";
        cin>>tank;
    }
};

class bike : protected vechile{
protected : 
    int cyl;
    int g;
    char cool[25];
    int tank;
    char wheel[25]; 

public :
    bike(){
        cout<<"\nno. of cylinder : ";
        cin>>cyl;
        cout<<"\nno. of gears : ";
        cin>>g;
        cout<<"\ncool type : ";
        cin>>cool;
        cout<<"\ntank size : ";
        cin>>tank;
        cout<<"\nwheel type : ";
        cin>>wheel;
    }
};

class audi : protected car{
char modle[25];
public : 
    audi(){
        cout<<"\nenter model name of audi car : ";
        cin>>modle;
    }

    void dis(){
        cout<<"\n\n---audi car details are---\n\nmilage"<<milage<<"\nprice : "<<price<<"\nowner price : "<<ow_pr<<"\nwarranty = "<<warranty<<"\nno. of seats : "<<seats<<"\nfuel tank type : "<<tank<<"\nmodel name : "<<modle;
    }
};

class ford : protected car{
char modle[25];
public : 
    ford(){
        cout<<"\nenter model name of ford car : ";
        cin>>modle;
    }

    void dis(){
        cout<<"\n\n---ford car details are---\n\nmilage"<<milage<<"\nprice : "<<price<<"\nowner price : "<<ow_pr<<"\nwarranty = "<<warranty<<"\nno. of seats : "<<seats<<"\nfuel tank type : "<<tank<<"\nmodel name : "<<modle;
    }
public : 

};

class tvs : protected bike{
    char make[25];
public : 
    tvs(){
        cout<<"\nentr the make type of tvs bike : ";
        cin>>make;
    }
    void dis(){
        cout<<"\n\n---tvs bike detail---\n\nmilage : "<<milage<<"\nprice : "<<price<<"\nno. of cylinder : "<<cyl<<"\nno. of gears : "<<g<<"\ncoolinf technology : "<<cool<<"\nwheel type : "<<"\ntank capacity : "<<tank;
    }
};

class bajaj : protected bike{
char make[25];
public : 
    bajaj(){
        cout<<"\nentr the make type of bajaj bike : ";
        cin>>make;
    }
    void dis(){
        cout<<"\n\n---bajaj bike detail---\n\nmilage : "<<milage<<"\nprice : "<<price<<"\nno. of cylinder : "<<cyl<<"\nno. of gears : "<<g<<"\ncoolinf technology : "<<cool<<"\nwheel type : "<<"\ntank capacity : "<<tank;
    }
};

int main(){
    cout<<"\n-----basic detail of tvs vechile-----\n";
    tvs t1;

    cout<<"\n-----basic detail of bajaj vechile-----\n";
    bajaj b1;

    cout<<"\n-----basic detail of audi vechile-----\n"; 
    audi a1;

    cout<<"\n-----basic detail of ford vechile-----\n"; 
    ford f1;

    cout<<"\n\n--------displaying details of vechile-----------\n\n";
    a1.dis();
    f1.dis();
    t1.dis();
    b1.dis();
    return 0;
}