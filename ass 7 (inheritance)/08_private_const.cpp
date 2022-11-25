#include <iostream>

using namespace std;
class a{
    a(){
        cout<<"\na - constructor invoked through friend class";
    }    

public :
    a(int x){
        cout<<"\na - constructor invoked through member function";

    }
    friend class b;

    void constructor(){
        a A(8);
    }
};

class b : public a{
public :
    b(){
        a A;
        cout<<"\nb - consturctor";
    }
};

int main(){
 //   a s;
    b b1;
    b1.a::constructor();

    return 0;
}