/*
#include<iostream>
using namespace std;

// bottom top - similar to fibonacci series 
int staricase(int n)
{
int f = 1, s = 2;
	if(n == 1) return f;
	for(int i = 3; i<=n; i++)
	{
		int curr = f+s;
		s = curr;
	}
	return s;
}

int main()
{
	int n;
	cin >> n;
	cout<<staricase(n)<<"\n";
return 0;

}
*/


// Top Bottom Approach

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int dp[n+1];
	dp[0] = 1;
	dp[1] = 1;
	for(int i = 2; i<n+1; i++)
	{
		dp[i] = dp[i-1]+dp[i-2];
	}
	cout << dp[n] <<"\n";
}

int main()
{
	solve();
	
return 0;
}
