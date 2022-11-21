#include <iostream>

using namespace std;

int bin(int *a , int l , int r , int mid , int n){
    
    if(*(a+mid) == n)
    return (mid);

    if(*(a+l) == (*(a+r)))
    return -1;

    else if(*(a+mid) > n){
        r = mid-1;
        mid = (l+r)/2;
        bin(a , l , r , mid , n);
    }

    else if(*(a+mid) < n){
        l = mid+1;
        mid = (l+r)/2;
        bin(a , l , r , mid , n);
    }
}

int main(){

    int *a = new int(10);

    cout<<"enter 10 vlaues for your array : ";
    for(int i=0 ; i<10 ; i++)
    cin>>*(a+i);

    for(int i=0 ; i<10 ; i++){
        for(int j=0 ; j<10 ; j++){
            if((*(a+j)>*(a+j+1)) && (j+1) < 10){
                int temp = *(a+j);
                *(a+j) = *(a+j+1);
                *(a+j+1) = temp;
            }
        }
    }

    cout<<endl<<"the sorted array is : ";
    for(int i=0 ; i<10 ; i++)
    cout<<a[i]<<" ";

    int n;
    cout<<"\nenter the no. to be searched : ";
    cin>>n;

    int c = bin(a , 0 , 9 , 9/2 , n);

    if(c==-1)
    cout<<endl<<n<<" not found in the array";

    else
    cout<<endl<<n<<" is present at "<<c<<" index";
}

//63 71 89 25 17 23 5 9 59 45