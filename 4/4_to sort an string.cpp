#include <iostream>

using namespace std;

class string{
    char str[100];

public :

    void input(){
        cout<<"enter your string : ";
        cin>>str;
    }

    void sort_dis(){
        int m=0 , n;
        
        while(str[m] != '\0'){

            n=0;
            while(str[n+1] != '\0'){
                if(str[n] > str[n+1]){
                    char temp = str[n];
                    str[n] = str[n+1];
                    str[n+1] = temp;
                }
                n++;
            }
            m++;
        }

        cout<<endl<<"the sorted string is : "<<str;
    }
}s;

int main(){

    s.input();
    s.sort_dis();
    return 0;

}