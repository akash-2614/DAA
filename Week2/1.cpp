#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=0; i<t; ++i)
    {
        cin>>n;
        int arr[n];
        for(int j=0; j<n; ++j)
        {
            cin>>arr[j];
        }
        int key,count=1,check=0;
        cin>>key;

        for(int j=0; j<n; ++j)
        {
            if(arr[j]==key)
            {
                check=1;
                for(int k=j+1; arr[k]<=key; ++k)
                {
                    count++;
                }
                cout<<key<<" - "<<count<<endl;
                break;
            }
        }
        if(check == 0)
        {
            cout<<"Key not present"<<endl;
        }
    }
    return 0;
}