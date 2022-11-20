#include <iostream>
#include <math.h>

using namespace std;

void vol(int r);
void vol(int l , int rc);
void vol(int a , int b , int c);

int main(){
    int r , a , b , c , rc , l ;
    
    printf("\n\n------------------for cuboid--------------------\n\nenter the length width and height of a cuboid respectiely : ");
    cin>>a>>b>>c;
    vol(a , b , c);

     
    printf("\n\n------------------for circle--------------------\n\nenter the radius length of the circle : ");
    cin>>r;
    vol(r);

     
    printf("\n\n------------------for cylinder--------------------\n\nenter the height and radius of cylinder respectively : ");
    cin>>l>>rc;
    vol(l , rc);

    return 0;
}

void vol(int r){
    float a;
    a=4/3*3.14*r*r*3;
    cout<<"\n\n\tvolume of cicle is : "<<a<<"unit^3";
}

void vol(int l , int rc){
    float v;
    v=3.14*rc*rc*l;
    cout<<"\n\n\tvolume of cylinder is : "<<v<<"unit^3";
}

void vol(int a , int b , int c){
    int v;
    v=a*b*c;
    cout<<"\n\n\tvolume of cuboid is : "<<v<<"unit^3";
}
