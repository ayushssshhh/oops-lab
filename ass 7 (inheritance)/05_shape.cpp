#include <iostream>

using namespace std;

class shape{

public:
    void dis(){
        cout<<"\n this is a shape ";
    }
};

class circle : public shape{
    int r;
    float a;

public : 
    circle(int x = 4){
        r = x;
    }

    void area(){
        a = 3.14*r*r;
        cout<<"circle and its area is : "<<a;
    }
};

class sq : public shape{
    int r;
    int a;

public : 
    sq(int x = 4){
        r = x;
    }

    void area(){
        a = r*r;
        cout<<"square and its area is : "<<a;
    }
};

class rec : public shape{
    int l;
    int b;
    int a;

public : 
    rec(int x = 4 , int y = 2){
        l = x;
        b = y;
    }

    void area(){
        a = l*b;
        cout<<"rectangle and its area is : "<<a;
    }
};

int main(){

    circle c1;
    c1.shape::dis();
    c1.area();

    sq s1;
    s1.shape::dis();
    s1.area();

    rec r1;
    r1.shape::dis();
    r1.area();

    return 0;
}