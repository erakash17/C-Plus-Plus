#include <iostream>

using namespace std;

template<class T>
class Point{
    T x;
    T y;
public:
    Point(T a,T b){
        x=a;
        y=b;
    }
    virtual void print(){

        cout<<"X is "<<x<<endl;
        cout<<"Y is "<<y<<endl;
    }
};
class Base{
    int a;
public:
    int b;
public:
    void getdata(int l,int m){
        a=l;
        b=m;
    }
     void print(){
        cout<<"base "<<a<<endl;
    }
};

class Nopoint:public Base {
    public:
    void print(){
        cout<<"deriverd "<<b<<endl;
    }
};

template <typename X,typename Y>
void getdata(X a,Y b){
    cout<<"value of a "<<a<<endl;
    cout<<"value of b "<<b<<endl;
}

int main()
{
    Point<float> *x = new Point<float>(1.12,2.12345);
    x->print();
//    Base obj;
//    Nopoint obj1;
//    Base *ptr=&obj1;
//    Nopoint *ptr1=&obj;//this will not work
//    ptr1->getdata(77,44);
//    ptr1->print();
//    ptr->getdata(5,6);
//    ptr->print();

//    x->print();
//    getdata<float,char>(1.0,'v');
    return 0;
}
