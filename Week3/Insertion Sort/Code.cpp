#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n)
{ 
    int temp,j,c=0,shift=0;
    for(int i=1; i<n; ++i)
    {
        temp=arr[i];
      j=i-1;
      while(j>=0 && arr[j]>temp)
      {
          arr[j+1]=arr[j];
          j--;
          c++;
          shift++;
      }
      arr[j+1]=temp;
      shift++;
    }
    for(int i=0; i<n; ++i)
        cout<<arr[i]<<" ";
    cout<<endl<<"comparisons = "<<c;
    cout<<endl<<"shifts = "<<shift<<endl;
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

    insertion_sort(arr,n);
    }

return 0;
}