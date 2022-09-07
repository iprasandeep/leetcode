#include<bits/stdc++.h>
using namespace std;
int coinchange( vector<int>&coins, int amount)
{
	int Max = amount+1;
	vector<int> dp(amount+1, Max);
	dp[0] = 0;
	for(int i = 1; i<=amount; i++)
	{
		for(int j = 0; j<coins.size(); j++)
		{
			if(coins[j]<=i)
			{
				dp[i] = min(dp[i], dp[i-coins[j]]+1);
			}
		}
	}
	return dp[amount]>amount?-1:dp[amount];
}
int main()
{
	int n;
	cin >> n;
	int amount;
	cin >> amount;
	vector<int>coins(n);
	for(int i = 0; i<n-1; i++)
	{
		cin >> coins[i];
	}
	cout<<coinchange(coins,amount)<<"\n";
return 0;
}
