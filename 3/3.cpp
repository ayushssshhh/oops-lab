#include <iostream>

using namespace std;

void pattern(char = '*', int = 80);
//void pattern(char ch , int n);

int main(){
    char ch;
    int n;
    cout<<"enter the character and no. of itteration respectively : ";
    cin>>ch>>n;
    pattern(ch,n);
    printf("\nwithout passing arrgument \n");
    pattern();

    return 0;
}

void pattern(char ch , int n){
    for(int i=0 ; i<n ; i++)
    cout<<ch;
}