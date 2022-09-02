#include<iostream>
using namespace std;


int robber(int a[], int start, int end)
{
	int prev = 0;
	int curr = 0;
	int next = 0;
	
	for(int i = start; i<=end; i++)
	{
		next = max(prev+a[i], curr);
		prev = curr;
		curr = next;
	}
	return curr;
}

int rob(int a[], int n)
{
	if(n == 1) return a[0];
	
	int range1 = robber(a, 0, n-2);
	int range2 = robber(a, 1, n-1);
	return max(range1, range2);
}
int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i<n; i++)
	{
		cin >> a[i];
	}
	
	cout<<rob(a, n)<<"\n";
	
return 0;
}
