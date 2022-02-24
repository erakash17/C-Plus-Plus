#include <iostream>

using namespace std;
int a=111;  //global variable

void ok(){
 cout<<"value of A in Ok is "<<a<<endl;   //always check first local variable then check global
}

int main()
{
    int a=10;  //declare local variable
    a=22;             //change value

    cout <<"value of A is "<< a << endl;

    ok();
    int y=5;
    char *x;
    (y <= 9) ? sprintf(x,"0%d",y):sprintf(x,"%d",y);
    cout << "value of x: " << x << endl;
    cout <<"value of A after ok is "<< a << endl;
    return 0;
}
