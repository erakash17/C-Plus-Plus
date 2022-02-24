/***************************************************************************
 *   Copyright (C) 2022 by self                                            *
 *   Author : Er. Akash Erande                                             *
 *   Created on : 2022 : 1 : 28                                           *
 ***************************************************************************/
#include <iostream>
#include<string>
using namespace std;
template < class T > class vector
{
    int size;
    int capacity;
    T *arr;
public:
  vector ()
  {

    size = 0;
    capacity = 1;
    arr=new T[1];
  }
  void push_back(T data){
      if(size==capacity){
          T *temp = new T[2*capacity];
          for (int i=0;i<capacity;i++){
              temp[i]=arr[i];
          }
          delete[] arr;
          capacity = capacity*2;
          arr=temp;
      }
      arr[size]=data;
      size++;
  }
  int sieze(){
      return size;
  }
  int capacityi(){
      return capacity;
  }
  void display(){
      for(int i=0;i<size;i++){
          cout<<arr[i]<<" ";
      }
      cout<<endl;
  }

};

int main ()
{
  vector<int> v;
  v.push_back(10);
  v.push_back(11);
  v.push_back(12);
  cout<<"Size is -> "<<v.sieze()<<endl;
  cout<<"Capacity is -> "<<v.capacityi()<<endl;
  v.display();

  vector<string> v1;
  v1.push_back("Akash");
  v1.push_back("Anil");
  v1.push_back("Erande");

  cout<<"Size is -> "<<v1.sieze()<<endl;
  cout<<"Capacity is -> "<<v1.capacityi()<<endl;
  v1.display();
  return 0;
}
