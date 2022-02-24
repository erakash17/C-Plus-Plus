/***************************************************************************
 *   Copyright (C) 2021 by self                                            *
 *   Author : Er. Akash Erande                                             *
 *   Created on : 2021 : 10 : 29                                           *
 ***************************************************************************/

#include <iostream>
#include<list>
#include<algorithm>
using namespace std;
class School_bag {
  public:
  virtual void draw ()=0;
};
class Water: public School_bag{
    public:
    void draw(){
        std::cout << "Draw Water bottle" << std::endl;
    }
};
class Book: public School_bag{
    public:
    void draw(){
        std::cout << "Draw Book" << std::endl;
    }
};
class Pencil: public School_bag{
    public:
    void draw(){
        std::cout << "Draw Pencil" << std::endl;
    }
};
class Lunchbox: public School_bag{
    public:
    void draw(){
        std::cout << "Draw Lunchbox" << std::endl;
    }
};
class Drawingbooks: public School_bag{
    public:
    void draw(){
        std::cout << "Draw Drawingbooks" << std::endl;
    }
};
class CompositeScoolbag:public School_bag{
  private:
  list<School_bag *> child_Schoolbag;
  public:
    void draw(){
  for (list<School_bag *>::iterator schoolbag=child_Schoolbag.begin(); schoolbag != child_Schoolbag.end();
       ++schoolbag){
      (*schoolbag)->draw();
      }
//  for_each( child_Schoolbag.begin(), child_Schoolbag.end(), [] (int *val1){cout<<*val1<<' ';});
  for (list<School_bag *>::iterator it=child_Schoolbag.begin(); it != child_Schoolbag.end(); ++it)
      cout << ' ' << (*it);

cout<<endl;
    }

  void add (School_bag *Schoolbag){
      child_Schoolbag.push_back(Schoolbag);
  }

};
int main()
{
    Water *wat=new Water();
    Book *boo = new Book();
    Pencil *pen = new Pencil();
    Lunchbox *lunch = new Lunchbox();
    Drawingbooks *drew = new Drawingbooks();

    //composite object
    CompositeScoolbag *schoolbag = new CompositeScoolbag();
    CompositeScoolbag *section1 = new CompositeScoolbag();
    CompositeScoolbag *section2 = new CompositeScoolbag();
    CompositeScoolbag *section3 = new CompositeScoolbag();

    schoolbag->add(section1);
    schoolbag->add(section2);

    section1->add(wat);
    section1->add(section3);
    section2->add(boo);
    section2->add(pen);

    section3->add(lunch);
    section3->add(drew);

    schoolbag->draw();
//    section1->draw();
//    section3->draw();
    return 0;
}
