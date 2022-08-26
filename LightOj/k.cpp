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

vi v[100005];
int vis[10005];
void dfs(int node)
{
    vis[node]=1;
    for(int child: v[node])
    {
        if(vis[child]==0)dfs(child);
    }
}

void solve()
{
    ll n,e, t;
    cin>>t;
    ll c = 0;
    while(t--)
    {
        c++;
        cin>>n>>e;
    while(e--)
    {
        ll x,y;
        cin>>x>>y;
        v[x].push_back(y);
        //v[y].push_back(x);
    }
    ll cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            cnt++;
            dfs(i);
        }
    }
    if(cnt==0)
    {
        cout<<"Case #"<<c<<": "<<"Doomed!"<<endl;
    }
    else
    cout<<"Case #"<<c<<": "<<"The desired island is "<<cnt<<endl;

    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //ll t;
    //cin>>t;
    //while(t--)
    //{
         solve();
    //}
    return 0;
}


