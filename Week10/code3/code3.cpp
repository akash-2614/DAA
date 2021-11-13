#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int> a;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    for(int i=0;i<n;i++)
        a[v[i]]++;
    int count = 0;
    for(auto i=a.begin();i!=a.end();i++)
        if(i->second > n/2)
        {
            cout<<"yes"<<endl;
            cout<<i->first<<endl;
            count = 1;
            break;
        }
    if(count == 0)
        cout<<"no"<<endl;
    return 0;
}