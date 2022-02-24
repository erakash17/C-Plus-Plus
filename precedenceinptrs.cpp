#include <iostream>
#include<string>
using namespace std;

int main()
{
    int x=25;
    int* ptr=&x;
//    (*ptr)++;//value of x is 26
//   *(++ptr);//value of x is 25
    ++(*ptr);
//    cout<<"vale of x "<<x<<endl;

    char str[]="Akash;manoj";
    int length=sizeof(str);
    char str1 [10];
    char str2 [10];

    for(int i=0;i<length;i++){
        if(str[i]==';'){
            str1=str1.append(str[i]);
        }
cout<<str1;
    }

    return 0;
}
