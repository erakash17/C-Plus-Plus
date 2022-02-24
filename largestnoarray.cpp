/***************************************************************************
 *   Copyright (C) 2022 by self                                            *
 *   Author : Er. Akash Erande                                             *
 *   Created on : 2022 : 1 : 19                                           *
 ***************************************************************************/
#include <iostream>

using namespace std;
int largest(int arr[],int len){
    int temp=0;
    for(int i=0;i<=len;i++){
        if (arr[i]>temp) {
            temp = arr[i];
            cout<<temp<<endl;
        }
    }
   return temp;
}
int main()
{
    int arr[]={1,15,10,12,16,6};
    int length = sizeof(arr)/sizeof(arr[0]);
    cout<<"largest number is -> "<<largest(arr,length)<<endl;

    return 0;
}
