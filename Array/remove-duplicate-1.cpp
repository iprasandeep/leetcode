#include<iostream>
using namespace std;

void solve(int a[], int n)
{
	int i = 0; 
	for(int j = 1; j<n; j++)
	{
		if(a[i]!=a[j])
		{
			i++;
		}
		a[i] = a[j];
	}
	cout<< i+1<<"\n";
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
	solve(a, n);	
return 0;
}
