#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=0 ;i<t; ++i)
    {
        cin>>n;
        int arr[n];
        for(int j=0; j<n; ++j)
        {
            cin>>arr[j];
        }
        int key,count=1,check=0;
        cin>>key;
        if(arr[0] == key)
        {
            cout<<"Present "<<count<<endl;
            break;
        }
        int k = 1;
        while(k<n && arr[k] <= key)
        {
            count++;
            k = k*2;
        }
        for(int j=k/2; j<n; ++j)
        {
            if(key == arr[j])
            {
                count++;
                check = 1;
                cout<<"Present "<<count<<endl;
                break;
            }
            else
                count++;
        }
        if(check == 0)
            cout<<"Not Present "<<count<<endl;
    }
}