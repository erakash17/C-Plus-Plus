#include <iostream>
#include<thread>
#include<mutex>
#include<string>
#include<chrono>
using namespace std;
int i=0;
int j=0;
std::mutex m1,m2;
std::mutex m3,m4;
void thread1 (string x,int loopfor){
    int y=0;
    while(true){
//    std::lock(m1,m2);
//     std::lock(m3,m4);
    m1.lock();
    m2.lock();
//    std::this_thread::sleep_for (std::chrono::seconds(1));
    for (i=0;i<=loopfor;i++){
        y++;
        cout<<"Thread name is "<<x<< " and "<<i<<endl;
    }
    m1.unlock();
    m2.unlock();
//    m3.unlock();
//    m4.unlock();
    }
}
void thread2 (string x,int loopfor){
    int z=0;
    while(true){
//    std::lock(m3,m4);
//    std::lock(m1,m2);
    m2.lock();

    m1.lock();

//    std::this_thread::sleep_for (std::chrono::seconds(1));
    for (i=0;i<=loopfor;i++){
        z++;
        cout<<"Thread name is "<<x<< " and "<<i<<endl;
    }
    m1.unlock();
    m2.unlock();
//    m3.unlock();
//    m4.unlock();
}

}

void fun(string c,int loopfor){
    int y=0;
    while(true){
//    std::lock(m1,m2);
//     std::lock(m3,m4);
    m1.lock();
//    m2.lock();
//    std::this_thread::sleep_for (std::chrono::seconds(1));
    for (i=0;i<=loopfor;i++){
        y++;
        cout<<"Thread name is "<<c<< " and "<<i<<endl;
    }
    m1.unlock();
//    m2.unlock();
//    m3.unlock();
//    m4.unlock();
    }
}

int main()
{
    std::thread x1(thread1,"TH1",1000);
    std::thread x2(thread2,"TH2",1000);

//    std::thread x3(fun,"x3",1000);
//    std::thread x4(fun,"x4",1000);

//    x4.join();
//    x3.join();
    x1.join();
    x2.join();


    return 0;
}
