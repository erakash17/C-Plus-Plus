

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Graphic{
  public:
  virtual void draw()=0;
  virtual void add(Graphic *g){}
  virtual ~Graphic(){}
};
class Line: public Graphic{
  public:
  void draw(){cout<<"Line Draw"<<endl;}
};
class Rect: public Graphic{
  public:
  void draw(){cout<<"Rectangle Draw"<<endl;}
};
class Picture: public Graphic{

  public:
  void draw(){
      for_each(glist.begin(), glist.end(), mem_fun((&Graphic::draw)));
  }
  void add(Graphic *a){
      glist.push_back(a);

  }
  private:
  vector<Graphic *> glist;
};
int main()
{
    Line l,m;
    Rect r,s;
    Picture p;


    p.add(&l);
    p.add(&r);
    p.add(&m);
    p.add(&s);
    p.draw();
    return 0;
}
