#include<iostream>
using namespace std;
class abc
{
    int a;
    public :
    void input(void)
    {
        cout<<"Enter the data\n";
        cin>>a;
    }
    void output(void)
    {
        cout<<"\nThe entered number is\n";
        cout<<a;
    }
};
int main()
{
    abc x;
    int c=0,k=0;
    char ch;
    cout<<"Printing the number of times a specific function is called\n";
    do
    {
        x.input();
        c++;
        x.output();
        k++;
        cout<<"Do you want to continue?pree y for yes and n for no\n";
        scanf(" %c",&ch);
    }while (ch=='y');
    cout<<"The number of times both the function are called are: "<<c<<","<<k; 
}