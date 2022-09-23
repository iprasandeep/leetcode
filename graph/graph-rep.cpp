#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	
	// declare the adjacent matrix
	int adj[n+1][n+1];
	
	// take edges as input
	for(int i = 0; i<m; i++)
	{
		int u, v;
		cin >> u >> v;
		adj[u][v];
		adj[v][u];
	}
	return 0;
}


// disadvanatages of using this method
