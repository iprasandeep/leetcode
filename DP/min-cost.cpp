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
