#include<iostream>
using namespace std;
int main()
{
    int n,t;
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
            
            if(key == arr[j])
            {
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