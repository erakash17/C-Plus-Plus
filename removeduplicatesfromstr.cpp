/***************************************************************************
 *   Copyright (C) 2022 by self                                            *
 *   Author : Er. Akash Erande                                             *
 *   Created on : 2022 : 2 : 17                                           *
 ***************************************************************************/
#include <iostream>

using namespace std;
char *duplicates(char str[],int size){
    int index=0;
    int j;
    for(int i=0;i<size;i++){
        for( j=0;j<i;j++){
            if(str[i]==str[j]){

                break;
            }
        }
            if(j==i){
                str[index++]=str[i];

            }

    }

    return str;
}

int main()
{
    char str[]="aaabbbcccaabb";
    int len=sizeof(str);
    cout<<duplicates(str,len)<<endl;
    return 0;
}
