#include <iostream>

using namespace std;

class number{
    int n;

    public:

    void input(int a){
        n = a;
    }

    void dis(){
        cout<<" "<<n;
    }
    friend int greatest(number c1 , number c2 , number c3);
}c1,c2,c3;

int greatest(number c1 , number c2 , number c3){
    int max = c1.n>c2.n ? c1.n : c2.n;
    max = max>c3.n ? max : c3.n;
    return max;
}

int main(){
    int a,b,c;
    cout<<"enter 3 nos. : ";
    cin>>a>>b>>c;
    c1.input(a);
    c2.input(b);
    c3.input(c);
    cout<<"the nos. are :";
    c1.dis();
    c2.dis();
    c3.dis();

    cout<<"\nthe greatest no. is : "<<greatest(c1 , c2 ,c3);
}