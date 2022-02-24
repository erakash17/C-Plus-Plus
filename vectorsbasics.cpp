

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int > vec;
        cout << "sizeof vector is "<<vec.size() << endl;
    cout << "sizeof capacity is "<<vec.capacity() << &vec<< endl;
    for(int i=0;i<=500000;i++)
    {
        vec.push_back(i);
    }
    cout << "sizeof vector is "<<vec.size() << endl;
    cout << "sizeof capacity is "<<vec.capacity() << &vec<< endl;
     for(int i=0;i<=500000;i++)
    {
        vec.push_back(i);
    }
    cout << "sizeof vector is "<<vec.size() << endl;
    cout << "sizeof capacity is "<<vec.capacity() << &vec<< endl;
    return 0;
}
