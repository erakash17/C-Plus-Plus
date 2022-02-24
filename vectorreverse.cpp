#include <iostream>
#include <vector>
#include <algorithm>
#include<numeric>
using namespace std;

int main()
{
    vector<int> v(10);
    // for (int i=0;i<10;i++)v.push_back(i);
    iota(v.begin(),v.end(),11);
    for_each(v.begin(),v.end(),[](int val){cout<<val<<" ";});
    cout<<endl;
    cout<<v.size()<<endl;
    int x=v.size();
    for (int i=0;i<x/2;i++){
        int temp=v[x-1-i];
        v[x-1-i]=v[i];
        v[i]=temp;
    }
    for_each(v.begin(),v.end(),[](int val){cout<<val<<" ";});
    cout<<endl;
    return 0;
}
