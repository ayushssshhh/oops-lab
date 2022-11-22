#include <iostream>
#include <vector>

using namespace std;

class book{
    public :
    
    char name[25];
    char author[25];
    int price;

    void input(){
        cout<<"enter book name : ";
        scanf("\n%[^\n]s",&name);
        cout<<"enter the name of author : ";
        scanf("\n%[^\n]s",&author);
        cout<<("enter the price of the book : ");
        cin>>price;
    }

    void dis(){
        cout<<"\nname of the book : "<<name<<"\nname of the author : "<<author<<"\nprice of the book : "<<price;
    }
};

vector<int> sorted_book(book){

}

int main(){
    int n;
    cout<<"enter the no. of book : ";
    cin>>n;

    book *b = new book [10];

}
