#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cout<<"Enter the number of test cases: ";
    cin>>t;
    for(int i=0; i<t; ++i)
    {
        cout<<"Enter the size of the array: ";
        cin>>n;
        int arr[n];
        for(int j=0; j<n; ++j)
        {
            cin>>arr[j];
        }
        int key;
        cout<<"Enter the number: ";
        cin>>key;
        int count=1,check=0;
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