/***************************************************************************
 *   Copyright (C) 2022 by self                                            *
 *   Author : Er. Akash Erande                                             *
 *   Created on : 2022 : 1 : 18                                           *
 ***************************************************************************/

#include <iostream>
using namespace std;

class Mystring{
    private:
    int lenght;
    char *str;
    public:

    Mystring(){
        lenght=0;
        str = nullptr;
        //cout<<"default str -> "<<str<<endl;
    }
    Mystring( char *data):str(data){
        //cout<<"string is -> "<<str<<endl;
        int count=0;
        for(int i=0;str[i]!='\0';i++){
            count++;
        }
        lenght = count ;
    }
  /*  Mystring(const Mystring &obj){
         this->str=obj.str ;
        std::cout <<"obj.str" << obj.str<< std::endl;
    }*/
   friend Mystring& operator+(const Mystring& S1, const Mystring & S2){
       Mystring *s3=new Mystring();
       s3->lenght= S1.lenght + S2.lenght;

        return *s3;
    }
    int lenghts(){

        return lenght;
    }
};
int main()
{

    Mystring s1("Akash");
    Mystring s2("Erande");
    Mystring s3=s1 + s2;
    cout<<"length of string is -> "<<s3.lenghts()<<endl;
    return 0;
}
