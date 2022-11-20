#include <iostream>

using namespace std;

void swap(int *a , int *b);

int main(){

    int a , b;
    cout<<"enter a and b repectively : ";
    cin>>a>>b;
    cout<<"before swaping : a="<<a<<"and b="<<b;
    swap(&a,&b);

    return 0;
}

void swap(int *a , int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
    cout<<"\nafter swaping a = "<<*a<<" b = "<<*b;
}