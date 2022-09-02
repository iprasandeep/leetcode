

/*

 Given cost array, ith step is cost[i], can climb 1 or 2 steps
    Return min cost to reach top floor, can start at index 0 or 1
    Ex. cost = [10,15,20] -> 15, start at idx 1, pay 15, climb 2

    Recursion w/ memoization -> DP, min cost to reach 1/2 steps below curr step
    Recurrence relation: minCost[i] = min(minCost[i-1] + cost[i-1], minCost[i-2] + cost[i-2])

    Time: O(n)
    Space: O(1)
*/
#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i<n;i++)
	{
		cin >> a[i];
;	}
	int downone = 0;
	int downtwo = 0;
	for(int i = 2; i<=n; i++)
	{
		int temp = downone;
		downone = min(downone+a[i-1], downtwo+a[i-2]);
		downtwo  = temp;
	}
	cout<<downone<<"\n";
}

int main()
{
	solve();
	
return 0;
}
