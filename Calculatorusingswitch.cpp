/***************************************************************************
 *   Copyright (C) 2021 by self                                            *
 *   Author : Er. Akash Erande                                             *
 *   Created on : 2021 : 11 : 2                                           *
 ***************************************************************************/
#include <iostream>

using namespace std;

class Simplecalc{
    int a;
    int b;
    public:
     void getdata(int x,int y){
       a=x;
       b=y;
    }
    int calculate(){
        int n;
        cout<<"Enter the no to Perform Opeation from simplecalc "<<endl;
        cin>>n;
        switch (n) {
        case 1:
           cout<<"Addition is "<<a+b<<endl;
            break;
        case 2:
            cout<<"SUb is "<<a-b<<endl;
            break;
        case 3:
            cout<<"Multi is "<<a*b<<endl;
            break;
        case 4:
            cout<<"Divide is "<<a/b<<endl;
            break;
        default:
            cout<<"Invalid entry.."<<endl;
            break;
        }
    }

};
int main()
{
    cout << "Normal Calculator !" << endl;
    Simplecalc *s= new Simplecalc();
    s->getdata(10,20);
    return 0;
}
