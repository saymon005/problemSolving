#include<bits/stdc++.h>
#define ll    long long int
#define lu    unsigned long long int
#define pr    pair<ll, ll>
#define st    set<ll>
#define vi    vector<ll>
#define mst   multiset<ll>
#define mp    map<ll, ll>
#define F     first
#define S     second
#define pb    push_back
#define pf    push_front
#define MP    make_pair
#define mod   1000000007
#define MAX   1000004
#define endl  "\n"
#define fr    freopen("input.txt", "r", stdin);
#define fw    freopen("output.txt", "w", stdout);
using namespace std;

bool isPrime(int num)
{
    if(num==1)
    {
        return false;
    }
    bool flag=true;
    for(int i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

void solve()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll best = 0, sum = 0;

    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i<n; i++)
    {
        sum = max(arr[i], sum+arr[i]);
        best = max(best, sum);
    }
    cout<<best<<endl;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // ll t;
    // cin>>t;
    // while(t--)
    // {
      solve();
    //}
    return 0;
}

