#include <iostream>

using namespace std;

class arr{
    int n;

public :
    
    int* in(){
        cout<<"\n\nenter no. of element : ";
        cin>>n;
        int *a = new int[n];
        cout<<"\nenter "<<n<<" values for your array : ";
        for(int i=0 ; i<n ; i++)
        cin>>*(a+i);
        return a;
    }

    void sum(int *a){

        int l=0;
        
        for(int i=0 ; i<n ; i++)
        l += *(a+i);

        cout<<endl<<"the sum of array is : "<<l;
    }
}s;

int main (){

    s.sum(s.in()); 
    return 0;
}
