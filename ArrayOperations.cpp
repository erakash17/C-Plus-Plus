#include <iostream>

using namespace std;

int main()
{
    int marks[4]={10,20,30,40};

//    cout<<marks[0]<<endl;
//    cout<<marks[1]<<endl;
//    cout<<marks[2]<<endl;
//    marks[3]=22;
//    cout<<marks[3]<<endl;
    int len=sizeof(marks)/sizeof(marks[0]);
    for(int i=0;i<len;i++){
        cout<<"Marks are "<<marks[i]<<endl;
    }
    int *p = marks;
    cout<<*(p++)<<endl;
    cout<<*++p<<endl;
    cout<<(*p)++<<endl;
    cout<<*p++<<endl;
    cout<<"marks of 1 "<<*p<<endl;
    cout<<"marks of 2 "<<*(p+1)<<endl;
    cout<<"marks of 3 "<<*(p+2)<<endl;
    cout<<"marks of 4 "<<*(p+3)<<endl;
    return 0;
}
