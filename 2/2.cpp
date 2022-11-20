#include <iostream>

using namespace std;

void prime(int n);

int main(){
    int n ; 
    printf("enter the no. till where you want to find prime no.");
    cin>>n;
    prime(n);
    return 0;
}

void prime(int n){

    printf("the prime no. between 1 to %d are :",n);
    for (int i=3 ; i<=n ; i++){
        int c=0;
        for(int j=2 ; j<=i/2 ; j++){
            if (i%j==0)
            c++;
        }
        if(c==0)
        printf(" %d",i);
    }
}