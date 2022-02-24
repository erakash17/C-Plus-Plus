#include <iostream>
#include<thread>
#include<mutex>

using namespace std;
class Singleton{
    static Singleton *insta;
    int a;
    Singleton(){
        a=0;
    }
public:
    static Singleton *getinsta(){
        cout<<"insta is "<<insta<<endl;
        if(!insta){
            insta = new Singleton();
        }
            return insta;

    }
    void setdata(int x){
        a=x;
    }
    void getdata(){
        cout<<"The value of a is "<<a<<endl;
    }
};
Singleton *Singleton::insta=0;

int main()
{
    Singleton *s ;
    s->getinsta();
    s->setdata(10);
    s->getdata();
//    Singleton *a;
//    a->setdata(100);
//    a->getdata();

    return 0;
}
