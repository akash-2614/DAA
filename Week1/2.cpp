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
        int count=1,check=0,key,mid;
        cin>>key;
        int left=0,right=n-1;
        while(left <= right)
        {
            mid = left + (right-left)/2;
            if(key == arr[mid])
            {
                cout<<"Present "<<count<<endl;
                check=1;
                break;
            }
            else
            {
                if(key < arr[mid])
                    right = mid-1;
                else
                    left = mid+1;
                    count++;
            }
        }
        if(check == 0)
            cout<<"Not Present "<<count<<endl;
    }
}