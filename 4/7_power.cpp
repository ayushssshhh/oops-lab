#include <iostream>

using namespace std;

class power{
    int b;
    int p;

public :
    
    int in(){
        cout<<"enter base and power respectively : ";
        cin>>b>>p;
        return p;
    }

    int pow(int p){
        static int no = 1;

        if(p == 0)
        return no;

        else{
            no *= b;
            pow(p-1);
        }
    }
}s;

int main(){

    cout<<"\nthe power is : "<<s.pow(s.in());
    return 0;

}