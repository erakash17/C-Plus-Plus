/***************************************************************************
 *   Copyright (C) 2021 by self                                            *
 *   Author : Er. Akash Erande                                             *
 *   Created on : 2021 : 11 : 19                                           *
 ***************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int a[5][4];
    int count=0;
    for (int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            count++;
            a[i][j]=count;
        }
    }
    for (int i=0;i<5;i++){
        for(int j=0;j<4;j++){

            cout<<"["<<i<<"]"<<"["<<j<<"]"<<":";
            cout<< a[i][j]<<"\n";
        }
    }
    return 0;
}
