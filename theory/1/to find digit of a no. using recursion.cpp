#include <iostream>

using namespace std;

int dig(int n){
    static int d=1;
    if((n/10) >= 1){
        d++;
        dig(n/10);
    }

    return d;
}

int main(){

    int n;
    cout<<"enter your no. : ";
    cin>>n;
    cout<<endl<<endl<<n<<" is a "<<dig(n)<<" digit no.";
    return 0;
}