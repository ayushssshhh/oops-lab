#include <iostream>

using namespace std;

class account{

    account(){
        cout<<"\n\nenter name : ";
        cin>>name;
        cout<<"\nenter account no. : ";
        cin>>acc_no;
        cout<<"\nenter account balance : $";
        cin>>bal;
    }

protected :
    int acc_no;
    int bal;
    char name[25];

public :
    
    friend class current;
    friend class saving;
    friend void deposit(account a);
};

class saving : protected account{
    int min_bal;
    account a1;

public:
    saving(){
        min_bal = 100;
    }

    void withdraw(){
        int w;
        cout<<"\n--withdrawl--\nenter amount to withdraw : $";
        cin>>w;

        if((bal-min_bal) >= w){
            bal -= w;
            cout<<endl<<"$"<<w<<" is withdrawen\naccount balance : "<<bal;
        }

        else
        cout<<"\ninsufficient balance";
    }

    void dis(){
        cout<<"\n\n----saving account----\nname : "<<name<<"\naccount no. : "<<acc_no<<"\nbalance : $"<<bal;
    }

    void depo(){
        deposit(a1);
    }
};

class current : protected account {
    int o;
    account a2;

public :
    current(){
        cout<<"\n--overdue--\n\nenter overdue : $";
        cin>>o;
    }

    void withdraw(){
        int w;
        cout<<"\n--withdrawal--\n\nenter amount to withdraw : $";
        cin>>w;

        if((bal-o) >= w){
            bal -= o;
            cout<<endl<<"$"<<w<<" is withdrawen\naccount balance : "<<bal;
        }

        else
        cout<<"\ninsufficient balance";
    }

    void depo(){
        deposit(a2);
    }

    void dis(){
        cout<<"\n\n----current account----\nname : "<<name<<"\naccount no. : "<<acc_no<<"\nbalance : $"<<bal;
    }
};

void deposit(account a){
    int d;
    cout<<"\n--deposit--\n\n\nenter amount to deposit : ";
    cin>>d;

    a.bal += d;
    cout<<"\nnet balance : "<<a.bal;
}

int main(){
   // account a1;
    saving s1;
  //  deposit(a1);
    s1.depo();
    s1.withdraw();
    s1.dis();

   // account a2;
    current c1;
   // deposit(a2);
    c1.depo();
    c1.withdraw();
    c1.dis();

    return 0;
}