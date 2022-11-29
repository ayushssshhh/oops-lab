#include <iostream>

int power(int b , int n){
    static int d = 1;
    if(n>0){
        d *= b;
        power(b , n-1);
    }

    else
    return d;
}

int main(){
    int n , b;
    printf("enter the base and power respectively : ");
    scanf("%d%d",&b,&n);
    printf("\n\nthe no. is : %d", power(b ,n));
}