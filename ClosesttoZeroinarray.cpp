/***************************************************************************
 *   Copyright (C) 2022 by self                                            *
 *   Author : Er. Akash Erande                                             *
 *   Created on : 2022 : 1 : 25                                           *
 ***************************************************************************/

#include <iostream>
#include <vector>
#include<algorithm>
#include <cstdlib>

using namespace std;

void
pirntarr (int arr[],int len)
{

  for (int i = 0; i < len; i++)
    {
      cout << arr[i] << " ";
    }
  cout << endl;
}

void
closestno (int arr[], int length)
{
    vector <int> n1;
    vector <int> n2;

  for (int i = 0; i < length; i++)
    {
      for (int j = 0; j < length; j++)
    {
      if (arr[i] < arr[j])
        {
          int temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
        }
       }
    }

    for(int i= 0;i<length;i++){
        if(arr[i]>=0){
            n1.push_back(arr[i]);
        }
        if(arr[i]<0){
            n2.push_back(arr[i]);
        }
    }
    pirntarr (arr,length);
    if (n1.empty())
    {
        cout<< "closest number is -> "<<(n2[n2.size()-1])<<endl;
    }
     if(n2.empty()){
        cout<< "closest number is -> "<<n1[0]<<endl;
    }

    // for_each(n1.begin(),n1.end(),[](int i){cout<<i<<" ";});
    // cout<<endl;
    // for_each(n2.begin(),n2.end(),[](int i){cout<<i<<" ";});
    // cout<<endl;
    // cout<<"first element of n1 "<<n1[0]<<endl;
    // cout<<"last element of n2 "<< (n2[n2.size()-1])<<endl;

    if(n1[0]==abs(n2[n2.size()-1])){
        cout<< "closest number is -> "<<n1[0]<<endl;
    }
    else if(n1[0]>abs(n2[n2.size()-1])){
        cout<< "closest number is -> "<<(n2[n2.size()-1])<<endl;
    }
    else{
        cout<< "closest number is -> "<<n1[0]<<endl;
    }
}

  int main ()
  {

    int arr[] = { 5, 3, 6 ,-3 };
    int size = sizeof (arr) / sizeof (arr[0]);
    // cout << "lenght of array is -> " << size << endl;
    closestno (arr, size);
    return 0;
  }
