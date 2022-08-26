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
    ll t,n,p,q;
    cin>>t;
    ll c = 0;
    ll cnt = 0;
    while(t--)
    {
        cnt++;
        cin>>n;
        ll arr[n];
        for(int i = 0; i<2*n; i++)
        {
            cin>>q;
            if(i%2==1)
            {
               if(q%2!=0 || q%3!=0)
            {
                c = 1;
            }
            else
            {
                c = 0;
            }
          }
        }
        if(c==1)
        {
            cout<<"Case "<<cnt<<": "<<"The number does not meet expectation."<<endl;
        }
        else
        {
            cout<<"Case "<<cnt<<": "<<"The number is both square and cube."<<endl;
        }

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

