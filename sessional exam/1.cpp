#include <iostream>

using namespace std;

template <typename t> void mul(t *arr , t *brr , int m , int n){

    t c[m][m] , a[m][n] , b[m][n];

    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            a[i][j] = *(arr + j + (i*m));
            b[i][j] = *(brr + j + (i*m));
        }
    }

    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<m ; j++)
        c[i][j] = 0;
    }

    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    

    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++){
            for(int k=0 ; k<m ; k++){
                int temp = a[i][j]*b[k][j];
                c[i][j] += temp;
            }
        }
    }

    cout<<"\n the multiplied matrix is  : \n";
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<m ; j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
} 

int main(){
    int m, n;
    cin>>m>>n;

    int a[m][n] , b[m][n];

    cout<<"\n enter mat1 : \n";
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++)
        cin>>a[i][j];
    }

    cout<<"\nenter mat 2 : \n";
    for(int i=0 ; i<m ; i++){
        for(int j=0 ; j<n ; j++)
        cin>>b[i][j];
    }
    
    mul(&a[0][0], &b[0][0] , m ,n);

    return 0;
}

//3 3 1 2 3 4 5 6 7 8 9 9 8 7 6 5 4 3 2 1 