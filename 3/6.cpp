#include <iostream>

using namespace std;

void f1(int n);
int main(){
    int n;
    cin>>n;
    f1(n);
    return 0;
}

void f1(int n){
    n++;
    cout<<endl<<n;
}