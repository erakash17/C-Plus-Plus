#include <iostream>

using namespace std;

void fibanacii(){
    int a=0;
    int b=1;
    int c;
    int n=10;
    cout<<"Series is"<<endl;
    for(int i=0;i<=n;i++){
        cout<<" "<<a;
        c=a+b;
        a=b;
        b=c;
    }
    cout<<endl;
}

int factorial(unsigned int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(int argc, char *argv[])
{
    int n=5;//can be a user input for no of rows
    int z=4;
    for(int i=0;i<=n;i++){
        for(int k=0;k<=z;k++){
            cout<<" ";

        }
        z=z-1;
        for(int j=0;j<=i;j++){
            cout<<" *";
        }

        cout<<"\n";
    }

    fibanacii();
    unsigned int num;
    cout<<"Enter the num "<<endl;
    cin>>num;
    cout<<"Factorial of given no is "<<factorial(num)<<endl;
    return 0;
}
