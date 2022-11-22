#include <iostream>

using namespace std;
class comp{
    int r;
    int i;

    public :

   // default constructor
    comp(){    
        r = 10;
        i = 5;
    }


    //paramaterized constructor with default argument
    comp(int x , int y=99){
        r = x;
        i = y;
    }

    void dis(){
        cout<<"the complex no. is : "<<r<< " + "<<i<<"i\n";

    }

    ~comp(){
        cout<<"\n-------------destructor invoked------------------\n";
    }
};

int main(){
    
    comp n1;  // default const.

    comp n2(10,20); //parametrize const.

    comp n3(12);  //default argument const.

    comp n4=n2;  // copy const.
    


    cout<<"\n\ndefault constructor : ";
    n1.dis();

    cout<<"\n\npramaterized argument constructor : ";
    n2.dis();

    cout<<"\n\ndefaul argument constructor : ";
    n3.dis();

    cout<<"\n\ncopy argument constructor : ";
    n4.dis();

    return 0;
}