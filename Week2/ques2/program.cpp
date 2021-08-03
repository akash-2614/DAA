#include<iostream>
using namespace std;
int main() 
{
    int n,t;
    cin>>t;
    for(int i=0; i<t; ++i)
    {
        cin>>n;
        int arr[n],f=0;
        for(int j=1; j<=n; ++j)
            cin>>arr[j];
        for(int j=1; j<=n; ++j)
        {
            for(int k=j+1; k<=n; ++k)
            {
                for(int l=k+1; l<=n; ++l)
                {
                    if(arr[j]+arr[k]==arr[l])
                    {
                        cout<<j<<", "<<k<<", "<<l<<endl;
                        f=1;
                        break;
                    }
                }
             }
        }
    if(f==0)
    {
        cout<<"No sequence found"<<endl;
    }
  }
    return 0;
}