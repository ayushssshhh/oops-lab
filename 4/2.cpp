#include <iostream>

using namespace std;

class string {
    char str[100];

public : 

    void input (){
        cout<<"\nenter your string : ";
        scanf("\n%[^\n]s" , str);
    }

    void display (){
        
        int n=0;
        while(str[n] != '\0'){
            if((str[n++] == 32))
                str[n] -= 32;
        }

        str[0] -= 32 ; 
        cout<<"\nyour string is : "<<str;
        
    }
}s;

int main(){

    s.input();
    s.display();
    return 0;
}