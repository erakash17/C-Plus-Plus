#include <iostream>
#include<cmath>
using namespace std;

class Simplecalc{
    int a;
    int b;
    public:
     void getdata(int x,int y){
       a=x;
       b=y;
    }
    void calculate(){
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
class Scientificcalc{
    int a;

    public:
    void getdata1(int x){
       a=x;

    }
    void showsci(){
        int n;
        cout<<"Enter the no to Perform Opeation "<<endl;
        cin>>n;
        switch (n) {
        case 1:
           cout<<"Sin is "<<(sin(a))<<endl;;
            break;
        case 2:
            cout<<"Cos is "<<(cos(a))<<endl;;
            break;
        case 3:
            cout<<"Tan is "<<(tan(a))<<endl;
            break;
        case 4:
            cout<<"exp is "<<(exp(a))<<endl;
            break;
        default:
            cout<<"Invalid Entry from sci"<<endl;
            break;
        }
    }

};
class Result : public Scientificcalc,public Simplecalc {

};

int main(){

    Result *y=new Result();
    y->getdata1(45);
    y->showsci();
    y->getdata(21,31);
    y->calculate();
    return 0;
}
