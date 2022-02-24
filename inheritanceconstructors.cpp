/***************************************************************************
 *   Copyright (C) 2021 by self                                            *
 *   Author : Er. Akash Erande                                             *
 *   Created on : 2021 : 11 : 16                                           *
 ***************************************************************************/
//In inheritance constructor gets call in forward order And
//disctructor gets called in reverse order
#include <iostream>

using namespace std;
class A {
public:
    A(){cout<<"This is A"<<endl;}
//   virtual void get(){
//        cout<<"get from A "<<endl;
//    }
    ~A(){cout<<"A Distructor"<<endl;}

};
class D {
public:
    D(){cout<<"This is D"<<endl;}
//   virtual void get(){
//        cout<<"get from D "<<endl;
//    }
    ~D(){cout<<"D Distructor"<<endl;}

};
class C:public D {
public:
    C(){cout<<"This is C"<<endl;}
//   virtual void get(){
//        cout<<"get from c "<<endl;
//    }
    ~C(){cout<<"C Distructor"<<endl;}

};
class B: public A ,public C{
public:
    B(){cout<<"This is B"<<endl;}
//    void get(){
//        cout<<"get from B "<<endl;
//    }

 ~B(){cout<<"B Distructor"<<endl;}

};
int main()
{
    B a;
//    B *obj=new B;
//    A *a=new A;//null ptr
//    A *a=new B;//cast is ok
//    B *oobj=dynamic_cast <B *> (a);
//    if (oobj==NULL){
//        cout<<"Null ptr"<<endl;
//    }
//    oobj->get();
    return 0;
}
