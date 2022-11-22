#include <iostream>
#include <string>

using namespace std;

class str{
    string s;
    int len;

    public :

    str(){
        s = "ayush";
        len = 5;
    }  

    str(char a[] , int n){
        s = a;
        len = n;
    }

    void dis(){
        cout<<"\nstring : "<<s<<"\nlength : "<<len<<endl;
    }

    friend str canc(str s1 , str s2 , str s3 , str s4);
};

str canc(str s1 , str s2 , str s3 , str s4){
    s4.s = s1.s + " " + s2.s + " " + s3.s;
    s4.len = s1.len + s2.len + s3.len + 3;
    
    return s4;
}

int main(){

    str s1; // const
    str s2("rushita" , 7);  //parameterized const
    str s3 = s2; //copy const
    str s4;

    s1.dis();
    s2.dis();
    s3.dis();

    s4 = canc(s1 , s2 , s3 , s4);
    s4.dis();
    
    return 0;
}