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
#define endl  "\n"
#define fr    freopen("input.txt", "r", stdin);
#define fw    freopen("output.txt", "w", stdout);
using namespace std;
void solve()
{
   ll factorial[20] = {} , k = 1;
   factorial[0] = 1;
   for(ll i = 1; i<= 20; i++)
   {
     factorial[i] = i*k;
     k = factorial[i];
   }
   int t;
   cin>>t;
   for(int j = 1; j<=t; j++)
   {
    ll n;
    cin>>n;
    vi ans;
    for(int i = 20; i>=0; i--)
    {
        if(factorial[i]<=n)
        {
            n-=factorial[i];
            ans.pb(i);
        }
    }
    cout<<"Case "<<j<<": ";
    if(n==0)
    {
        for(int i = ans.size()-1; i>0; i--)
        {
            cout<<ans[i]<<"!+";
        }
        cout<<ans[0]<<"!\n";
    }
    else
        cout<<"impossible\n";
   }
    
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
