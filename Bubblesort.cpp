#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void stringsort(){
    char str[200],temp;
    int i,j,len;
    cout<<"Enter the string\n";

    gets(str);
    len= strlen(str);
//    cout<<length;
    for (int i=0;i<len;i++){
        for(int j=0;j<len-1;j++){
            if(str[j]>str[j+1]){
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    cout<<"String is "<<str<<endl;
}

void sorted(int arr[],int size){
        int temp;
        for (int i=0;i<size;i++){

            for(int j=0;j<size;j++){
                if (arr[i] < arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }

            }

        }
        cout<<"After sorting: ";
        for(int x=0;x<size;++x){
            cout<<arr[x]<<" ";
        }
}

void ascitochar(){
    for(int i=65;i<=90;i++){
    cout<<"ASCI : "<<i<<" " <<" Character : "<<(char)i<<endl;
    }
    for(int i=97;i<=122;i++){
    cout<<"ASCI : "<<i<<" " <<" Character : "<<(char)i<<endl;
    }
}

int main()
{
    int numbers[5];
    ascitochar();
//    for(int i=0;i<4;i++){
//    stringsort();
//}
//    cout << "Enter buffer: " << endl;

//    for (int i = 0; i < 5; ++i) {
//    cin >> numbers[i];
//     }
//    int size= sizeof(numbers)/sizeof(numbers[0]);
//    sorted(numbers,size);
    return 0;
}
