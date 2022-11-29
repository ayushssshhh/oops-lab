#include<iostream>
using namespace std;
int main(){
    try{
        try{
            throw 20;
        }
        catch(int n){
            cout<<"Handled Partially"<<endl;
            throw;
        }
    }
    catch(int n){
        cout<<"Handling remaining"<<endl;
    }
    return 0;
}