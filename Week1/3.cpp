#include <bits/stdc++.h>
using namespace std;
int cou;
int jumpSearch(int arr[], int key, int n)
{
	int step = sqrt(n);

	int prev = 0;
	while (arr[min(step, n)-1] < key)
	{
		prev = step;
		step += sqrt(n);
        cou++;
		if (prev >= n)
			return -1;
	}

	while (arr[prev] < key)
	{
		prev++;
        cou++;
		if (prev == min(step, n))
			return -1;
	}
	if (arr[prev] == key)
		return prev;

	return -1;
}

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
        int key;
        cou=0;
        cin>>key;
        int check = jumpSearch(arr, key, n);


        if(check == -1)
        {
            cout<<"Not present "<<cou<<endl;
        }
        else
        {
            cout<<"Present "<<cou<<endl;
        }
    }
	return 0;
}

