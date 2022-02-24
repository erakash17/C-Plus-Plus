/***************************************************************************
 *   Copyright (C) 2021 by self                                            *
 *   Author : Er. Akash Erande                                             *
 *   Created on : 2021 : 12 : 9                                           *
 ***************************************************************************/

#include <iostream>
#include<memory>
#include<vector>
#include<algorithm>
using namespace std;
class Simple{
    public:
  int a;
  int *p;
  public:
  Simple(int x){
      a=x;
      p=&a;
      unique_ptr<int> pc(new int(10));
       cout<<"my constructor"<<&pc<<" "<<&p<<endl;
  }

   ~Simple(){

       cout<<"my distruxtor"<<&p<<&pc<<endl;
   }

};
int main()
{
    vector<Simple > simlist;
    unique_ptr<Simple> p1(new Simple(11));
//    unique_ptr<Simple> p2(new Simple(12));
//    unique_ptr<Simple> p3(new Simple(13));
//    unique_ptr<Simple> p4(new Simple(14));
//    unique_ptr<Simple> p5(new Simple(15));
//    unique_ptr<Simple> p6(new Simple(16));
//    unique_ptr<Simple> p7(new Simple(17));
//    unique_ptr<Simple> p8(new Simple(18));
//    unique_ptr<Simple> p9(new Simple(19));
    // Simple *p1=new Simple(11);
    // Simple *p2=new Simple(12);
    // Simple *p3=new Simple(13);
    // Simple *p4=new Simple(14);
//    cout<<"outputs are-: "<<&p1<<" "<<p1->a<<" "<<&p2<<" "<<p2->a<<" "<<&p3<<" "<<p3->a<<" "<<&p4<<" "<<p4->a<<endl;
//    simlist.push_back(*p1);
//    simlist.push_back(*p2);
//    simlist.push_back(*p3);
//    simlist.push_back(*p4);
//    simlist.push_back(*p5);
//    simlist.push_back(*p6);
//    simlist.push_back(*p7);
//    simlist.push_back(*p8);
//    simlist.push_back(*p9);

//    vector<Simple>::iterator it;
//    for (it = simlist.begin(); it != simlist.end(); ++it) {
//       cout <<" "<<&it<<" "<<it->a;
//    }
//    cout<<endl;
//    cout<<"size of = "<<simlist.size()<<endl;
//    cout<<"capacity = "<<simlist.capacity()<<endl;
    return 0;
}

