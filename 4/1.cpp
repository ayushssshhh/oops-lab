#include <iostream>
#include <stdlib.h>

using namespace std;

class dis{
    int feet;
    int inch;

public :
    void input(){
        cout<<endl<<"enter feet and inch respectively : ";
        cin>>feet>>inch;
    }

    void display(){
        cout<<feet<<"'"<<inch<<endl;
    }

    void add(dis* d){
        feet = d->feet + (d+1)->feet;
        inch = d->inch + (d+1)->inch;
        cout<<feet<<"'"<<inch<<endl;
        if(inch/12 >= 0){
            inch = inch%12;
            feet++;
        }

        cout<<endl<<"sum of two heights is : "<<feet<<"'"<<inch<<endl;
    }
};

int main(){

    class dis *d = (class dis*)calloc(3,sizeof(class dis));

    cout<<"----------------------input your height---------------------------"<<endl<<endl;
    
    for(int i=0 ; i<2 ; i++) 
    d[i].input();

    cout<<"----------------------displaying your height-------------------------\n\n"<<endl<<endl;
    for(int i=0 ; i<2 ; i++){
        cout<<endl<<"height "<<i+1<<" is : ";
        d[i].display();
    }

    d[3].add(d);   

    return 0;
}