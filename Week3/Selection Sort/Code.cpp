#include<iostream>
using namespace std;

void selectionsort(int arr[],int n)
{
    int min,c=0,s=0;
    for(int i=0; i<n-1; ++i)
    {
        min=i;
        for(int j=i+1; j<n; ++j)
        {
            if(arr[j]<arr[min])
            min=j;
            c++;
        }
        s++;
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
   // c=n*(n-1)/2;
    for(int i=0; i<n; ++i)
    cout<<arr[i]<<" ";
    cout<<endl<<"comparisons = "<<c;
    cout<<endl<<"swaps = "<<s<<endl;
    }

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; ++i)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0; j<n; ++j)
            cin>>arr[j];

        selectionsort(arr,n);
    }
    return 0;
}