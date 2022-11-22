#include <iostream>
#include <stdlib.h>

using namespace std;

class str{
    char s[25];
    int len;

    public :

    str(){
        s = 'ayush';
        len = 5;
    }

    str(char a[] , int n){
        s = a;
        len = x;
    }

    void dis(){
        cout<<"\n string : "<<s<<"\nlength : "<<len<<endl;
    }
};

int main(){

    str s1;
    str s2('rushita' , 7)

    s1.dis();
    s2.dis();
    
    return 0;
}