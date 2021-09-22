#include<bits/stdc++.h>
using namespace std;

void Sum(int *arr, int key, int n)
{
    int count=0;
    for(int i=0; i<n; ++i)
    {
        for(int j=i+1; j<n; ++j)
        {
            if(arr[i]+arr[j] == key)
            {
                count++;
                cout<<arr[i]<<" "<<arr[j]<<",";
            }
        }
    }
    if(count == 0)
        cout<<"No Such pair Exist";
    cout<<endl;
}

int main()
{
    int t,n,key;
    cout<<"Enter the number of test cases: ";
    cin>>t;
    for(int i=0; i<t; ++i)
    {
        cout<<"Enter the size of the array: "<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter the elements of the array: "<<endl;
        for(int i=0; i<n; ++i)
        {
            cin>>arr[i];
        }
        cout<<"Enter the key element: "<<endl;
        cin>>key;

        Sum(arr,key,n); 
    }
    return 0;
}