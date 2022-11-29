#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class kiit{
    public: 

    int roll;
    char name[25];
    char email[25];
    int marks;

    void setdata(){
        cout<<"\nenter roll : ";
        cin>>roll;

        cout<<"\nenter name : ";
        cin>>name;

        cout<<"\nenter email : ";
        cin>>email;

        cout<<"\nenter marks scored : ";
        cin>>marks;
    }

    void getdata(){
        cout<<"\n\n\nroll : "<<roll<<"\nrname : "<<name<<"\nemail : "<<email<<"\nmarks : "<<marks;
    }
};

int main(){

    kiit mor[10];
    kiit ev[10];
    int i = 0;

    cout<<"\nenter deatils of student appeared in the morning slot : \n";
    for(int i=0 ; i<10 ; i++){
        cout<<"\nenter details of student "<<i+1<<" : ";
        mor[i].setdata();
    }

    cout<<"\nenter deatils of student appeared in the evening slot : \n";
    for(int i=0 ; i<10 ; i++){
        cout<<"\nenter details of student "<<i+1<<" : ";
        ev[i].setdata();
    }

    vector<int> m;
    for(int i=0 ; i<10 ; i++){
        m.push_back(mor[i].marks);
    }

    vector<int> e;
    for(int i=0 ; i<10 ; i++){
        e.push_back(ev[i].marks);
    }

    sort(m.begin(), m.end(), greater<int>());  
    sort(e.begin(), e.end(), greater<int>());
    

    cout<<"\n\n-------------merit list of morning shift :-------------------- \n\n";
    for(int x=0 ; x<3 ; x++){
        for(int i=0 ; i<10 ; i++){
            if(mor[i].marks == m[x]){
                mor[i].getdata();
            
            }
        }

    }

    cout<<"\n\n----------------merit list of evening shift :------------------ \n";
    for(int x=0 ; x<3 ; x++){
        for(int i=0 ; i<10 ; i++){
            if(ev[i].marks == e[x])
            ev[i].getdata();
        
        }

    }

    return 0;

}

//1 aa jsdsah 457 2 bb lkdkadlj 455 3 cc djahdjkk 454 4 dd jkdadss 450 5 ee jjdhkaj 449 6 ff jhsjdak 448 7 gg hasdk 440 8 hh dfdjhd 490 9 ii jfhdjfs 500 10 jj klkll 510   1 aa jdhkjsh 120 2 bb lkdkadlj 455 3 cc djahdjkk 454 4 dd jkdadss 450 5 ee jjdhkaj 449 6 ff jhsjdak 448 7 gg hasdk 440 8 hh dfdjhd 490 9 ii jfhdjfs 500 10 jj klkll 510