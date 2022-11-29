#include <iostream>

using namespace std;

void fib(int n){
    static int c=0 , l=1;

    if(n>=0){
        cout<<c<<"  ";
        int temp = c;
        c = l;
        l += temp;
        fib(n-1);
    }

}

int main(){
    int n;
    cout<<"enter no. of term till whrer you wnat to display : ";
    cin>>n;
    cout<<endl<<"---------------------the fibonacci series till "<<n<<" terms-------------------------"<<endl;
    fib(n);
    return 0;
}