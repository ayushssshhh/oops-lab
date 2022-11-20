#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc ,char const *argv[]){

    int sum=0 , a=0;
    for(int i=1 ; i<argc ; i++){
        a=atoi(argv[i]);
        sum=sum+a;
    }
    cout<<"\n\nsum : "<<sum;
    return 0;
}