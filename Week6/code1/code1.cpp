#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n,s,d;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; ++i)
        for(int j=0;j<n; ++j)
            cin>>a[i][j];
    cin>>s>>d;
    s--;
    d--;

    bool z = false;
    stack<int> sp;
    bool visited[n];
    sp.push(s);         
    visited[s] = true;   
    while(!sp.empty())
    {
        int upper = sp.top();
        sp.pop();
        for(int v=0;v<n;v++)
        {
            if(a[upper][v] && v == d)
            {   
                z = true;
                break;
            }
            if(a[upper][v] && !visited[v])
            { 
                sp.push(v);
                visited[v] = true;
            }
        }
    }

    if(z == true)
        cout<<"Yes Path Exists"<<endl;
    else 
        cout<<"No Such Path Exists"<<endl;
    return 0;
}