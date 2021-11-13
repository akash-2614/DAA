#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool comparison(pair<int,int>a, pair<int,int>b)
{
     return (a.first > b.first);
}
int main()
{
   vector<pair<int,int>,int>job;
   int n,profit,deadline;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>profit>>deadline;
       job.push_back(make_pair(profit,deadline),i+1);
   }
    sort(job.begin(),job.end(),comparison);
    int maxEndtime=0,i,j;
    for(i=0;i<n;i++)
    {
        if(job[i].first.second>maxEndtime)
            maxEndtime=job[i].first.second;

    }
    int fill[maxEndtime];
    int countt=0,maxprofit=0;
    int b[n];
    for(int i=0;i<maxEndtime;i++)
        fill[i]=-1;
    for(int i=0;i<n;i++)
    {
        int j=job[i].first.second-1;
        while(j>=0 && fill[j]!=-1)
        {
            j--;
        }
        if(j>=0 && fill[j]==-1)
        {
            fill[j]=i;
            b[i]=job[i].second;
            countt++;
            maxprofit+=job[i].first.first;
        }
    }
    cout<<"Max number of tasks = "<<countt<<endl;
    cout<<"Selected task numbers : ";
    for(i=0;i<countt;i++)
        cout<<b[i]<<" ";
    return 0;
}