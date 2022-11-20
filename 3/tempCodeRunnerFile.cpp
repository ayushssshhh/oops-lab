#include <iostream>

using namespace std;

inline void f1(int n);

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    f1(n);
    return 0;
}

inline void f1(int n){
    cout<<"\ncube = "<<n*n*n<<" square = "<<n*n;
}