#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define pi pair<int, int>
#define f first
#define sc second
using namespace std;
void solve()
{
	int count = 0;
	int arr[4];
	for(int i =0; i<4; i++)
	{
		cin>>arr[i];
	}
	sort(arr, arr+4);
	for(int i =0; i<3; i++)
	{
		if(arr[i]==arr[i+1])
		{
			count++;
		}
	}
	cout<<count<<"\n";
}
int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	//ll t;
	//cin>>t;
	//while(t--)
	//{
		solve();
	//}
	return 0;
}
