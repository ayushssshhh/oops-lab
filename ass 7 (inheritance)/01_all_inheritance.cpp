#include <iostream>

using namespace std;

class A{
    int a;
    int b;

public :

    A(int x = 10 , int y = 5){
        a = x;
        b = y;
    }

    int getA(){
        return a;
    }

    int getB(){
        return b;
    }

    void dis(){
        cout<<"\n\n------class A------\na = "<<a<<"\nb = "<<b;
    }
};

class D{
    int e;

public :

    D(int x = 4){
        e = x;
    }

    int getD(){
        return e;
    }    
};

//single inheritance

class B : public A{
    int c;
public : 
    B(){
        c = getA()+getB();
    }

    B(int x){
        c = x;
    }

    int getC(){
        return c;
    }

    void dis(){
        cout<<"\n\n------class B(single inheritance)------\na = "<<getA()<<"\nb = "<<getB()<<"\nc = "<<c;

    }
};


//multilevel inheritance
class C: public B{
    int d;
public :

    C(){
        d = getA()+getB()+getC();
    }

    void dis(){
        cout<<"\n\n------class C(multilevel inheritance)-------\na = "<<getA()<<"\nb = "<<getB()<<"\nc = "<<getC()<<"\nd = "<<d;
    }

};

//multiple inheritance
class E: public A , public D{
    int f;

public: 
    E(){
        f = getA()+getD();
    }

    void dis(){
        cout<<"\n\n------class E(multiple inheritance)-------\na = "<<getA()<<"\ne = "<<getD()<<"\nf = "<<f;
    }

};

//hierachical inheritance of A -> B and F

class F : public A{
    int g;

public :
    F(int x = 7){
        g = x;
    };
    
    void dis(){
        cout<<"\n\n------class F(hierachical inheritance)------\na = "<<getA()<<"\nb = "<<getB()<<"\ng = "<<g;
    }  

    int getF(){
        return g;
    }

};


//hybird inheritance (A->F + A->B->C --->> G)

class G : public C , public F{
    int h;

public :
    G(){
        h = getC() * getF();
    }

    void dis(){
        cout<<"\n\n------class F(hybrid inheritance)------\nd = "<<getC()<<"\nf = "<<getF()<<"\nh = "<<h;
    }
};


int main(){
    A a1(100);
    a1.dis();


    //single inheritance
    B b1 , b2(100);
    b1.dis();
    b1.A::dis();
    b2.dis();

    //multilevel inheritance
    C c1;
    c1.dis();

    //multiple inheritance
    D d1;
    E e1;
    e1.A::dis();
    e1.dis();

    /*hierachaical inheritance
    F f1;
    f1.A::dis();
    b1.dis();
    f1.dis();*/

    //hybrid inheritance
    G g1;
    g1.dis();

    return 0;
}