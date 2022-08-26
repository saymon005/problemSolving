#include<bits/stdc++.h>
#define ll    long long int
#define lu    unsigned long long int
#define pr    pair<int, int>
#define st    set<int>
#define mst   multiset<int>
#define mp    map<int, int>
#define vi    vector<int>
#define pb    push_back
#define pf    push_front
#define mod   1000000007
#define MAX   1000004
#define f     first
#define sc    second
#define fr    freopen("input.txt", "r", stdin);
#define fw    freopen("output.txt", "w", stdout);
using namespace std;
int binarysearch(int arr[], int l, int r, int target)
{
	if(r>=l)
	{
		ll c = l + (r-l)/2;
		if(arr[c]==target) return c;
    	if (arr[c]>target)
    	{
    		return binarysearch(arr, l, c-1, target);
    	}

    		return binarysearch(arr, c+1, r, target);

	}
	return -1;
}
void solve()
{
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    //cin>>t;
   // while(t--)
    //{
        //solve();
    //}
    int arr[] = { -1, 0, 3, 5, 9, 12};
    int target = 9;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarysearch(arr, 0, n - 1, target);
    (result == -1)
        ? cout << "-1"
        : cout << result;
    return 0;
    return 0;
}

