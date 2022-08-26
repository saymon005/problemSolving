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
void solve()
{
    ll n,m,r,c,i,j, count = 0, sum = 0;
    cin>>n>>m>>r>>c;
    char s[n+1][m+1];
    mp row, col;
    for(i = 1; i<=n; i++)
    {
        for(j = 1; j<=m; j++)
        {
            cin>>s[i][j];
            if(s[i][j]== 'B')
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    if(row.size() == 0 && col.size() == 0)
    {
        cout<<"-1"<<"\n";

    }
    else if(s[r][c] == 'B')
    {
        cout<<"0"<<"\n";
    }
    else if(row[r]== 1 || col[c]==1)
    {
        cout<<"1"<<"\n";
    }
    else
    {
        cout<<"2"<<"\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
