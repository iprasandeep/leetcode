#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	
	// declare the adjacent matrix
	vector<int> adj[n+1];
	
	// take edges as input
	for(int i = 0; i<m; i++)
	{
		int u, v; // add wt as a input if the graph is weighted
		cin >> u >> v;
		
		adj[u].push_back(v); // if weighted graph then push+back({v, wt}); for both line
		adj[v].push_back(u); // if directed graph then comment this line
	}
	return 0;
}

// disadvanatages of using this method
