#include <iostream>

using namespace std;
class Point{
    int x,y;
public:
    Point(){
        cout<<"Default Constructor"<<endl;
    }

    Point(int a,int b){//parameterized constructor
        cout<<"parameterized constructor "<<endl;
         x=a;
         y=b;
    }
//    Point(const Point &obj){//copy constructor
//        x=obj.x;
//        y=obj.y;
//    }
    Point(Point &obj1){//copy constructor
        cout<<"copy constructor "<<endl;
        x=obj1.x;
        y=obj1.y;
    }

   int getx(){
       return x;
   }
   int gety(){
       return y;
   }

};

int main(int argc, char *argv[])
{
    Point ch;//default
    Point P1(10,20);
//    Point P3(122,220);
//    Point P2 = P1;
    ch = P1;
    cout<<"Parameterized "<<" P1.x -->  "<<P1.getx()<<" P1.y --> "<<P1.gety()<<endl;
//    cout<<"Copy "<<" P2.x -->  "<<P2.getx()<<" P2.y --> "<<P2.gety()<<endl;
    cout<<"Copy "<<" cch.x -->  "<<ch.getx()<<" ch.y --> "<<ch.gety()<<endl;
    return 0;
}
