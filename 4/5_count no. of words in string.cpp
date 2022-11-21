#include <iostream>

using namespace std;

class string{
    char str[100];

public :

    void input(){
        cout<<"enter your sentence : ";
        scanf("\n%[^\n]s", str);
    }

    void n_words(){
        int n=0 , i=1;

        while(str[n] != '\0'){
            if(str[n++] == 32)
            i++;
        } 

        cout<<"total no. of words : "<<i;
    }

}s;

int main(){
    s.input();
    s.n_words();
    return 0;
}
