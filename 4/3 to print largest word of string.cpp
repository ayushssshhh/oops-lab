#include <iostream>

using namespace std;

class string {
    char str[100];

public : 

    void input (){
        cout<<"\nenter your string : ";
        scanf("\n%[^\n]s" , str);
    }

    void large_word (){
        
        int n=0 , nw=0 , i , j=0 , lw=0;
        while(str[n] != '\0'){

            if((str[n++] != 32))
            nw++;
            else{
                i = n ;
                nw=0;
            }

            lw = lw>nw?lw:nw;
            j = lw>nw?j:i;

        }
        cout<<endl<<j;

        cout<<endl<<"the largest word is : ";
        for(int k=j ; k<j+lw ; k++ )
        cout<<str[k];
        
        
    }
}s;

int main(){

    s.input();
    s.large_word();
    return 0;
}