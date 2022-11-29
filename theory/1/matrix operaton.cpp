#include <iostream>

using namespace std;

int main(){

    int m , n;
    cout<<"enter the order of square : ";
    cin>>m;
    n=m;

    int *arr1 = new int [m*n];
    int *arr2 = new int [m*n];
    int *sum = new int (m*n);
    int *p = new int (m*n);

    cout<<"\n\n-------------------------input 1st matrix---------------------------"<<endl<<endl;
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<"enter "<<i+1<<"x"<<j+1<<" : ";
            cin>>*(arr1  + i*n + j);
        }
    }

     cout<<"\n\n-------------------------input 2nd matrix---------------------------"<<endl<<endl;
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<"enter "<<i+1<<"x"<<j+1<<" : ";
            cin>>*(arr2 + i*n + j);
        }
    }

    cout<<"\n\n--------------------the matrixes are-----------------------\n\n";
    cout<<"\nmatrix 1 : "<<endl;
    for(int i=0 ; i<m ; i++){
        cout<<endl;
        for(int j=0 ; j<n ; j++)
        printf("%d\t", *(arr1 + i*n + j));
    }

    cout<<"\nmatrix 2 : "<<endl;
    for(int i=0 ; i<m ; i++){
        cout<<endl;
        for(int j=0 ; j<n ; j++)
        printf("%d\t", *(arr2 + i*n + j));
    }

     for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++)
        *(sum + i*n + j) = *(arr2 + i*n + j) + *(arr1 + i*n + j);
    }

    cout<<"\n\n-------------------the sum of two matrix is------------------------\n"<<endl;
    for(int i=0 ; i<m ; i++){
        cout<<endl;
        for(int j=0 ; j<n ; j++)
        printf("%d\t", *(sum + i*n + j));
    }

    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            int s = 0;
            for(int k=0 ; k<m ; k++)
                s += *(arr1 + i*n + k) * *(arr2 + k*n + j);
            *(p + i*n + j) = s;
        }
    }

    cout<<"\n\n-------------------the product of two matrix is------------------------\n"<<endl;
    for(int i=0 ; i<m ; i++){
        cout<<endl;
        for(int j=0 ; j<n ; j++)
        printf("%d\t", *(p + i*n + j));
    }
    return 0;
}