/***************************************************************************
 *   Copyright (C) 2021 by self                                            *
 *   Author : Er. Akash Erande                                             *
 *   Created on : 2021 : 12 : 3                                           *
 ***************************************************************************/

#include <iostream>
#include <ctime>
#include <chrono>
#include <cstdint>
using namespace std;

class Simple{
    private:
    int a;

  public:

  explicit Simple(int x):a(x){
      cout<<"Defualt constructor = "<<a<<" "<<time(NULL)<<endl;
  }

};
constexpr long int fib(int n)
{
    int i=0;
//    while(i<=5000){
//        cout<<"value of i = "<<i<<endl;
//        i++;
//    }
    return (n <= 1)? n : fib(n-1) + fib(n-2);
}
uint64_t timeSinceEpochMillisec() {
  using namespace std::chrono;
  return duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
}
int main()
{
    // Simple ob(15);//=Simple(10);
    time_t current_time1=time(NULL);
     cout<<timeSinceEpochMillisec<<endl;
    cout<<fib(30)<<endl;
    time_t current_time2=time(NULL);
     cout<<timeSinceEpochMillisec<<endl;

    cout<<"result is = "<<current_time2 - current_time1<<endl;
    return 0;
}

