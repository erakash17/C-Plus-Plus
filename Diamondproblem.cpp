#include <iostream>

using namespace std;
class A{
    int a;
};
class B1:  virtual public A{
//    int b1;
};
class B2: virtual public A{
//    int b2;
};
class C : public B1, public B2{
//    int c;
};
class H
{
public:
    int x=10;

};
class I :virtual public H
{
public:

};
class J : public I
{
public:

};
int main()
{
    H my;
    I my1;
    J my2;
    cout << "Size of my " <<sizeof(my)<< endl;
    cout << "Size of my1 " <<sizeof(my1)<< endl;
    cout << "Size of my2 " <<sizeof(my2)<< endl;
//    C obj;
//    B1 obj1;
//    B2 obj2;
//    A obj3;
//    cout << "Size of B1 " <<sizeof(obj1)<< endl;
//    cout << "Size of B2 " <<sizeof(obj2)<< endl;
//    cout << "Size of A  " <<sizeof(obj3)<< endl;
//    cout << "Size of C " <<sizeof(obj)<< endl;
    return 0;
}
