#include <iostream>

using namespace std;

class complex_no{

    int real;
    int img;

public :

    void input(){
        cout<<"\nenter the real and and imaginary part respectively : ";
        cin>>real;
        cin>> img;
    }

    void display(){
        cout<<endl<<real<<" i"<<img;
    }
};

int main(){

    int n;
    cout<<"enter total no. of entries : ";
    cin>>n;

    complex_no c[n];

    cout<<"----------------enter "<<n<<" complex no.--------------------------\n\n";
    for(int i=0 ; i<n ; i++){
        cout<<"input : ";
        c[i].input();
    }

    cout<<"----------------"<<n<<" complex no. are : --------------------------\n\n";
    for(int i=0 ; i<n ; i++)
    c[i].display();
    
    return 0;
}