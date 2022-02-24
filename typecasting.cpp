#include <iostream>

using namespace std;
class A{
    int a=10;
    public:
     virtual void foo(){
         cout<<"Class A function called "<<endl;
     }

} ;
class B : public A {
    int b=20;
    public:
    virtual void foo(){
        cout<<"Class B function called "<<endl;
    }

};
class D : public A {
    int d=250;
    public:
    virtual void foo(){
        cout<<"Class D function called "<<endl;
    }

};
class C{
     int a=10;
    public:
    int fun(int x) const
    {
        const_cast<C *>(this)->a=x;
    return a;
    }
};
int main()
{


    B x;
    A *ob = &x;

    B *obb=dynamic_cast<B *>(ob);//safe downcasting
    if (obb == nullptr)
        cout << "null" << endl;
    else
        cout << "not null" << endl;
    D *obd=dynamic_cast<D *>(obb);//cannot do like this
    if (obd == nullptr)
        cout << "null.." << endl;
    else
        cout << "not null.." << endl;
    // ob1=dynamic_cast<B *>(ob);
    ob->foo();
    // ob1->foo();

    C obj;
    // cout<<"vlue is "<<obj.fun(20)<<endl;
    //  int i=10;
    // const int *p=&i;
    // cout<<"value of p is "<<*p<<endl;
    // int *x=const_cast<int *>(p);
    // // printf("%d ",p);
    // *x=20;
    // std::cout << *p << std::endl;
    return 0;
}
