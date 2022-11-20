#include <iostream>
#include <math.h>

using namespace std;

void area(int r);
void area(int l , int b);
void area(int a , int b , int c);

int main(){
    int r , a , b , c , br , l ;
    
    printf("\n\n------------------for triangle--------------------\n\nenter the length of three sides of triangle : ");
    cin>>a>>b>>c;
    area(a , b , c);

     
    printf("\n\n------------------for circle--------------------\n\nenter the radius length of the circle : ");
    cin>>r;
    area(r);

     
    printf("\n\n------------------for square--------------------\n\nenter the length of adjecent two sides of a square : ");
    cin>>l>>br;
    area(l , br);

    return 0;
}

void area(int r){
    float a;
    a=3.14*r*r;
    cout<<"\n\n\tarea of cicle is : "<<a<<"unit^2";
}

void area(int l , int b){
    int a;
    a=l*b;
    cout<<"\n\n\tarea of rectangle is : "<<a<<"unit^2";
}

void area(int a , int b , int c){
    float ar,s;

    s = (a+b+c)/2;
    ar = sqrt(s*(s-a)*(s-b)*(s-c));
    
    cout<<"\n\n\tarea of triangle is : "<<ar<<"unit^2";
}
