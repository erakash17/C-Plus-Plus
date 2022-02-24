#include <iostream>

using namespace std;

void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int sum(int a,int b){
    int c = a + b;
    return c;
}
int mul(int *a,int *b){
    cout<<*a<<" both are "<<*b<<endl;
    int c = *a * *b;
    return c;
}
void byvalue(int a){
    a=30;
    cout<<"A in byvalue "<<a<<endl;
}
void byref(int &a){
    a=32;
    cout<<"A in byref "<<a<<endl;
}
void byref(int *a){
    *a=21;
    cout<<"A in byref "<<*a<<endl;
}
int main()
{
    int x=10;
    byvalue(x);
    cout<<"X after byvalue "<<x<<endl;
    byref(x);
    cout<<"X after byref "<<x<<endl;
    byref(&x);
    cout<<"X after pointer "<<x<<endl;
//    int x=10;
//    int y=5;
//    cout<<x<<y<<endl;
//    /*Pass by refreance*/
//    swap(x,y);
//    cout<<x<<" change "<<y<<endl;

//    cout<<"After swapping "<<x<<y<<endl;

    ///pass by pointer

//    cout<<"Multiplication is = "<<mul(&x,&y)<<endl;
//    cout<<"Enter No : ";
//    cin>>x;
//    cout<<"Another No : ";
//    cin>>y;
//    cout<<"Sum is "<<sum(x,y)<<endl;
    return 0;
}
