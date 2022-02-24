#include <iostream>
#include<vector>
#include <algorithm>    // std::for_each
#include<numeric>       //iota
using namespace std;
void myfunction (int i) {  // function:
  cout << ' ' << i;
}
bool is_even(int n) {
    cout<<n<<endl;
   return (n % 2 == 0);
}
int main()
{
    vector<int> v{1,2,5,7,9};

    for_each( v.begin(), v.end(), [] (int val){cout<<val<<' ';});
    cout<<endl;
    vector<int>left(v.begin(),v.begin()+v.size()/2);
    for_each( left.begin(), left.end(), [] (int val1){cout<<val1<<' ';});
    cout<<endl;
    vector<int>r(v.begin()+v.size()/2,v.end());
    for_each( r.begin(), r.end(), [] (int val2){cout<<val2<<' ';});
    cout<<endl;
    cout<<(v.size()/2)<<endl;
    bool res=any_of(v.begin(),v.end(),is_even);
    if (res == true)
          cout << "Vector contains all even numbers." << endl;
    vector<int> io(10);
    iota (io.begin(),io.end(),100);
    for_each( io.begin(), io.end(), [] (int val3){cout<<val3<<' ';});
    cout<<endl;
    
    return 0;
}
