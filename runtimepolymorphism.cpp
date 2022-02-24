#include <iostream>

using namespace std;

class Baseclass{
public:
    int base=11;
    virtual void show(){
        cout<<"1 display the value of base " << base<<endl;
    }
};

class Derieved:public Baseclass{
public:
    int derived=22;
    void show(){
        cout<<"2 display the value of base in Derived..." << base<<endl;
        cout<<"2 display the value of derived " << derived<<endl;
    }
};
int main()
{
    Baseclass *base_pointer=new Derieved();
    Derieved *derieved_ptr=new Derieved();
    Derieved *derieved_ptr1;
    Baseclass *bse= new Baseclass();
//    Baseclass obj_base;
//    Derieved obj_derived;

//    base_pointer = &obj_derived;

//    base_pointer->show();
    derieved_ptr1=dynamic_cast<Derieved *>(bse);
    derieved_ptr=dynamic_cast<Derieved *>(base_pointer);
    if(derieved_ptr1==nullptr){
        cout<<"Address of derived ptr1 = "<<derieved_ptr1<<endl;
    }
    else{
        cout<<"Address of derived ptr1 = "<<derieved_ptr1<<endl;
    }
    if(derieved_ptr==nullptr){
        cout<<"Address of derived ptr = "<<derieved_ptr<<endl;
    }
    else{
        cout<<"Address of derived ptr = "<<derieved_ptr<<endl;
    }
//    derieved_ptr->show();

//    obj_derived.show();
//    Derieved *derived_pointer;

//    derived_pointer = &obj_derived;

//    derived_pointer->derived=11;
//    derived_pointer->base=45;
//    derived_pointer->show();

    return 0;
}
