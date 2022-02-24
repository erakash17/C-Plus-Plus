#include <iostream>

using namespace std;

int main()
{
    int arr[]={1,3,5};
        int arr1[]={2,4,6};
        int n=sizeof(arr)/sizeof(int);
        int l=sizeof(arr1)/sizeof(int);
        int r=n+l;
        //  cout<<n<<endl;
        int arr3[r];//={0,0,0,0,0,0};
        for(int i=0;i<n;i++){
            // cout<<i<<" "<<arr[i]<<endl;
            arr3[i]=arr[i];
        }

        for(int i=0;i<n;i++){
            // cout<<i<<" "<<arr[i]<<endl;
            arr3[i+n]=arr1[i];
        }

        int m=sizeof(arr3)/sizeof(int);
        cout<<"Array after merging "<<endl;
        for(int j=0;j<m;j++){

            cout<<arr3[j]<<" ";
        }
        cout<<endl;
        int temp;
        for (int i=0;i<m;i++){

            for(int j=0;j<m;j++){
                if (arr3[i] < arr3[j]){
                    temp=arr3[i];
                    arr3[i]=arr3[j];
                    arr3[j]=temp;
                    }

                }

            }
        cout<<"sorted array after merging "<<endl;

        for(int j=0;j<m;j++){

            cout<<arr3[j]<<" ";
        }
        cout<<endl;

    return 0;
}
