/***************************************************************************
 *   Copyright (C) 2022 by self                                            *
 *   Author : Er. Akash Erande                                             *
 *   Created on : 2022 : 1 : 12                                           *
 ***************************************************************************/
#include <iostream>
#include<string>
using namespace std;

void revesre(string &str){
    int len = str.length();
    for(int i=len-1;i>=0;i--){//only print reverse not making string reverse
        cout<<str[i];
    }
    cout<<endl;
    cout<<"Original string 1 -> "<<str<<endl;

    for(int i=0;i<=len/2;i++){
        cout<<i<<" ";
        char temp= str[len-1-i];

        str[len-1-i]=str[i];
        str[i]=temp;
    }
    cout<<endl;
    cout<<"Reverse string -> "<<str<<endl;
    cout<<"Original string 1 -> "<<str<<endl;
}

int main(int argc, char *argv[])
{
    string str ="Akash";
    revesre(str);
    return 0;
}
