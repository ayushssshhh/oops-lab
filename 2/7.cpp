#include <iostream>
#include <math.h>

using namespace std;

class cod{
public :
    int x;
    int y;

public :
    
    void input(){
        cout<<"\nenter x and y coordinate respectively : ";
        cin>>x;
        cin>>y;
    }

    void display (){
        cout<<"( " <<x<<" , "<<y<<" )";
    }

};

float dis(cod *p);

int main(){

    cod *p = new cod [2];
    
    for(int i=0 ; i<2 ; i++ ){
        cout<<"--------------enter details for point"<<i+1<<" : -----------------";
        (p+i)->input();
    }

    for(int i=0 ; i<2 ; i++){
        cout<<"\n point "<<i+1<<" is : ";
        (p+i)->display();
    }

    float d=dis(p);

    printf("\n the distance between point 1 and 2 is : %2.4f units",d);

    return 0;
}

float dis(cod *p){
        int x1 , y1 , x2 , y2 , a , b ;
        float d;
        x1=p->x;
        y1=p->y;
        x2=(p+1)->x;
        y2=(p+1)->y;
        a=x1-x2;
        b=y1-y2;
        d=sqrt((pow(a,2)+pow(b,2)));
        return d;
    }