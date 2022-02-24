/***************************************************************************
 *   Copyright (C) 2022 by self                                            *
 *   Author : Er. Akash Erande                                             *
 *   Created on : 2022 : 1 : 12                                           *
 ***************************************************************************/
#include <iostream>
#include<vector>
using namespace std;
class Simple{
    int *ptr;
  public:
  Simple(){
      ptr = new int;
      std::cout << "Calling default constructor" << std::endl;
  }
  Simple(const Simple &obj){
      ptr = obj.ptr;
      cout<<"Copy constructor"<<endl;
  }
  Simple(Simple && obj){
      cout<<"Calling Move constructor"<<endl;
      ptr = obj.ptr;
      obj.ptr = NULL ;
  }
  ~Simple(){
      cout<<"Calling distructor"<<endl;
//      delete ptr;
  }
};
int main()
{
//    Simple obj;
//    Simple obj1(obj);
    vector <Simple> vec;
    vec.push_back(Simple());

    return 0;
}
