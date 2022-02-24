/***************************************************************************
 *   Copyright (C) 2021 by self                                            *
 *   Author : Er. Akash Erande                                             *
 *   Created on : 2021 : 12 : 17                                           *
 ***************************************************************************/
#include <iostream>

using namespace std;
template<class T>
class SmartP{
    T *mysmart;

    public:

    SmartP(T *data): mysmart(data){

    }
    T &operator *(){
       return *mysmart;
    }

    T* operator ->(){
        return mysmart;
    }
    ~SmartP(){
        delete mysmart;
    }
};
class Simple{
    int a;
    const int b;
  public:
  Simple(int y):b(y){

  }


  void setdta(int x){
      a=x;
  }
  void getdata(){
      cout<<"The vale of a is = "<<a<<endl;
      cout<<"The vale of b is = "<<b<<endl;
  }
  ~Simple(){

  }
};

int main()
{

    SmartP<Simple> ptr(new Simple(11));

    ptr->setdta(10);
    ptr->getdata();


    return 0;
}
