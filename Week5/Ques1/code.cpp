#include<bits/stdc++.h>
using namespace std;

int findmax(char a[],int n)
{   
    char max ='a';
    int i;
    for(i=0;i<n;i++)
        if(a[i]>max)
            max=a[i];
    return (max-'a');
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char arr[n];

        for(int i=0; i<n; ++i)
            cin>>arr[i];
        int h=findmax(arr,n);
        int c[h]={0};
        for(int i=0; i<n; ++i)
            c[arr[i]-'a']++;
        int max=0;
        char ans;
        for(int i=0; i<h; ++i)
        {      
            if(c[i]>max)
            {
                max=c[i];
                ans = i+'a';
            }
    }
    if(max==1)
        cout<<"No Duplicates Present"<<endl;
    else
        cout<<ans<<"-"<<max<<endl;
    }
return 0;

}