/***************************************************************************
 *   Copyright (C) 2022 by self                                            *
 *   Author : Er. Akash Erande                                             *
 *   Created on : 2022 : 2 : 24                                           *
 ***************************************************************************/
#include <iostream>
#include<vector>

using namespace std;
class Subject{
    vector<class Observer *> views;
    int value;
public:
    void attach(Observer *obs){
        views.push_back(obs);
    }
    void setvalue(int x){
        value=x;
        notify();
    }
    int getvalue(){
        return value;
    }
   void notify();

};

class Observer{
    Subject *mod1;
    int denomi;
public:
    Observer(Subject *subj,int din){
        mod1=subj;
        denomi=din;
        mod1->attach(this);
    }
    virtual void update()=0;

    Subject *getsub(){
        return mod1;
    }
    int getdivisor(){
        return denomi;
    }
};
void Subject::notify(){
    for(int i=0;i<views.size();i++){
        views[i]->update();
    }
}
class Denominator: public Observer{
    int deno;
public:
    Denominator(Subject *mod,int den):Observer(mod,den){
        deno=den;
    }
    void update(){
        cout<<getsub()->getvalue()<<" divide by "<<deno << " is -> "<<getsub()->getvalue()/deno<<endl;
    }
};
class Multiplication: public Observer{
    int mul;
public:
    Multiplication(Subject *mod,int m):Observer(mod,m){
        mul=m;
    }
    void update(){
        cout<<getsub()->getvalue()<<" Multiply by "<<mul << " is -> "<<getsub()->getvalue()*mul<<endl;
    }
};

int main()
{
    Subject sub;
    Denominator x1(&sub,3);
    Denominator x2(&sub,4);
    Multiplication x4(&sub,9);
    sub.setvalue(9);
    return 0;
}
