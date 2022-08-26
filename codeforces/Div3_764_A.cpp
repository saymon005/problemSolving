#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pi pair<int, int>
#define f first
#define sc second
using namespace std;
void solve()
{
	ll n, m,count = 0;
	cin>>n;
	ll arr[n];
	for(int i = 0; i<n; i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);

	for(int i = 0; i<n; i++)
	{
		m = arr[n-1];
		while(arr[i] != m)
		{
			count++;
			arr[i]++;
		}
		cout<<count<<"\n";
		break;
	}
}
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	ll t;
	 cin>>t;
	 while(t--)
	 {
		solve();
	}
	return 0;
}
