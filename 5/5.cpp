#include <iostream>
#include <vector>

using namespace std;

class book{
    public :
    
    char name[25];
    char author[25];
    int price;

    friend vector<int> sorted_book(book *b, int n);

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

vector<int> sorted_book(book *b, int n){

    vector<int> sorted;
    
    int price_st , price_end;
    cout<<"\n\nenter the price range starting and ending point respectively : ";
    cin>>price_st>>price_end;

    for(int i=0 ; i<n ; i++){
        
        if((b[i].price >= price_st) && (b[i].price <= price_end))
            sorted.push_back(i);
    }

    if(sorted.empty())
        sorted.push_back(-1);
    
    return sorted;
}

int main(){
    int n;
    cout<<"enter the no. of book : ";
    cin>>n;

    book *b = new book [10];

    cout<<"------------------------enter details for "<<n<<" books---------------------"<<endl<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<endl<<"book "<<i+1<<" :-"<<endl;
        b[i].input();
        cout<<endl;
    }

    cout<<"------------------------details of "<<n<<" books---------------------"<<endl<<endl;
    for(int i=0 ; i<n ; i++){
        cout<<endl<<"book "<<i+1<<" :-";
        b[i].dis();
        cout<<endl;
    }

    vector<int> s = sorted_book(b ,n);

    cout<<endl<<"------------the sorted books are---------------"<<endl<<endl;
    for(int x : s){
        cout<<endl;
        b[x].dis();
        cout<<endl; 
    }

    return 0;
}
