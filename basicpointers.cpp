#include <iostream>

using namespace std;

void smartptrs(){

}

int main()
{
    //Pointer is datatype which holds the address of other datatype
    int a =3;
    int* b= &a;

    /*& is a (address of) operator */

    cout<<"Address of a"<<&a<<endl;
    cout<<"Address of a"<<b<<endl;

    /* '*' (value at)Derefrencing operator */

    cout<<"value at a "<<*b<<endl;

    /* Pointer to pointer */

    int** c =&b;
    cout<<"Address of b"<<&b<<endl;
    cout<<"Address of b"<<c<<endl;
    cout<<"value at address c "<<*c<<endl;
    cout<<"value at address value at c "<<**c<<endl;

    return 0;
}
