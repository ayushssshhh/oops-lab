#include <iostream>

using namespace std;

class meter;
class feet;

class feet{

    public: 

    int fee;
    int inch;

    friend void max_height(meter , feet);

    void input(){
        printf("enter the height in feet and inch respectively : ");
        cin>>fee>>inch;
        if(inch>=12){
            fee = inch/12;
            inch %= 12;
        }
    }

    void dis(){
        cout<<"\nthe height in feet and inch is : "<<fee<<"'"<<inch<<endl;
    }
}in;

class meter{

    public:

    int m;
    int cm;

    friend void max_height(meter , feet);
    void input(){
        cout<<"\nenter the height in meter and centimeter : ";
        cin>>m>>cm;
        if(cm>=100){
            m = cm/100;
            cm %=100;
        }
    }

    void dis(){
        cout<<"\nthe height in meter : "<<m<<"."<<cm;  
    }
}me;

void max_height(meter me , feet in){
    int h_feet =  (in.fee*12 + in.inch)*2.5 , h_meter = me.m*100 +  me.cm ;
    
    if(h_feet > h_meter)
    cout<<"\nthe greatest hieght is : "<<in.fee<<"'"<<in.inch;

    else
    cout<<"\nthe greatest hieght is : "<<me.m<<"."<<me.cm; 
}

int main(){

    in.input();
    me.input();

    cout<<"\n-------------------the two height are-------------------\n";
    in.dis();
    me.dis();
    cout<<"\n---------------------------------------------------------\n";
    max_height(me , in);

    return 0;
}