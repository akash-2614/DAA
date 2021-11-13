#include<iostream>
#include<cstring>     
#include<vector>
using namespace std;
int coin_func(vector<int> a, int n, int m){
    if(m < 0)
        return 0;      
    if(m == 0)
        return 1;       
    int table[m+1];
    memset(table, 0, sizeof(table));
    table[0] = 1;         
    
    for(int i=0; i<n; i++)
        for(int j=a[i]; j<=m; j++)
            table[j] += table[j-a[i]];
    return table[m];
}
int main(){
    int n,t;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>t;
        a.push_back(t);
    }
    int max_val;
    cin>>max_val;
    int result = coin_func(a,n,max_val);
    cout<<result<<endl;
    return 0;
}