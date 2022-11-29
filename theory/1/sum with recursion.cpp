#include <iostream>

using namespace std;

int sum(int n);

int main(){

    int n;
    cout<<"enter the no. till you want to find sumation : ";
    cin>>n;
    cout<<endl<<"the sum of all nos. from 1 to "<<n<<" is : "<<sum(n);
    
    return 0;
}

int sum(int n){

    if(n>0)
    return(n+sum(n-1));

}