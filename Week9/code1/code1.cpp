// C++ Program for Floyd Warshall Algorithm
#include <bits/stdc++.h>
using namespace std;

#define n 5
#define INF 99999

void printSolution(int arr[][n])
{
	cout << "Shortest Distance Matrix \n";
	for (int i=0; i<n; ++i) 
    {
		for (int j=0; j<n; ++j) 
        {
			if (arr[i][j] == INF)
				cout<<"INF"
					<<"	 ";
			else
				cout<<arr[i][j]<<"	 ";
		}
		cout<<endl;
	}
}

void floydWarshall(int graph[][n])
{
	int arr[n][n];
	for (int i=0; i<n; ++i)
		for (int j=0; j<n; ++j)
			arr[i][j] = graph[i][j];

	for (int k=0; k<n; ++k) 
    {
		for (int i=0; i<n; ++i) 
        {
			
			for (int j=0; j<n; ++j) 
            {
				
				if (arr[i][j]>(arr[i][k] + arr[k][j])
					&& (arr[k][j] != INF
						&& arr[i][k] != INF))
					arr[i][j] = arr[i][k] + arr[k][j];
			}
		}
	}

	
	printSolution(arr);
}


int main()
{
	int graph[n][n] = { { 0, 10, 5, 5, INF },
                        { INF, 0, 5, 5, 5 },
                        { INF, INF, 0, INF, 10 },
                        { INF, INF, INF, 0, 20 },
						{ INF, INF, INF, 5, 0  } };
    

	floydWarshall(graph);
	return 0;
}

