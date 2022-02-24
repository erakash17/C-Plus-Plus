#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

void sine(int hi,int len){
    int in =1;int out=2;
    int i,j,k;
    for (i=1;i<=hi;i++){
        for(j=1;j<=len;j++){
            for(k=1;k<=out;k++){
                cout<<" ";
            }
            cout<<"*";
            for(k=1;k<=in;k++){
                cout<<" ";
            }
            cout<<"*";
            for(k=1;k<=out;k++){
                cout<<" ";
            }
            cout<<" ";
           }
          if((i+1)!=hi){out=1;}else{out=0;}
          if((i+1)!=hi){in=3;}else{in=5;}
           cout<<endl;
        }

}

int main()
{

    sine(5,5);

//    int amp=5,freq=10;
//    for(int j=0;j<=100;j+=amp){
//        for(int i=0;i<=(300*freq);i+=freq){
//            float value=sin(i*(3.14/180))*100;
//            if((j-100)<=value) printf(" ");
//            else printf("*");
//        }
//        printf("\n");
//    }
//    for(int j=0;j>=-100;j-=amp){
//        for(int i=180;i<=(300*freq+180);i+=freq){
//            float value=sin(i*(3.14/180))*100;
//            if((j)<=value) printf(" ");
//            else printf("*");
//        }
//        printf("\n");
//    }

    return 0;

}

