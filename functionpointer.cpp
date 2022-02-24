#include <iostream>

/*
 * syntax of function pointer is
 * data_type(*funcptr)(arguments){}
 * functptr=function name
 * funcptr()//call function
 */
using namespace std;
int add(int a,int b){
    int c =a+b;
    return c;
}

void func1(){
    cout<<"My Function executed"<<endl;
}
void func2(void(*ptr)()){
    ptr();
}
int main()
{
    int (* ptrr)(int,int);
    ptrr = add;
    cout <<"sum is "<<ptrr(11,21)<<endl;
    // void(*ptr)();//syntax
    // ptr=func1;
    // ptr();
    func2(func1);


    return 0;
}
