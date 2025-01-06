// hybrid inheritance :it is the combination of more then one inheritance 
#include<iostream>
using namespace std;
class A{
    public:
    int a;
    public:
    void geta(){
        cout<<"Enter a:";
        cin>>a;
    }
    void show_a(){
        cout<<"A="<<a<<endl;
    }
};
class B:public A{
    public:
    int b;
       public:
    void getb(){
        cout<<"Enter b:";
        cin>>b;
    }
    void show_b(){
        cout<<"B="<<b<<endl;
    }
};
class C:public B{
      public:
    int c;
       public:
    void getc(){
        cout<<"Enter c:";
        cin>>c;
    }
    void show_c(){
        cout<<"C="<<c<<endl;
    }
};
class D {
      public:
    int d;
       public:
    void getd(){
        cout<<"Enter d:";
        cin>>d;
    }
    void show_d(){
        cout<<"D="<<d<<endl;
    }
};
class E :public D,C{
      public:
    int res;
       public:
    void getall(){
        geta();
        getb();
        getc();
        getd();
    }
    void show(){
        show_a();
        show_b();
        show_c();
        show_d();
        res=a+b+c+d;
        cout<<"Total ="<<res<<endl;
    }
};
int main(){
    E e;
    e.getall();
    e.show();
}