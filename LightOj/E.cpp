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
    while(1)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(a==0 && b ==0 && c==0)
        {
            break;
        }
        ll A = a*a, B = b*b, C = c*c;
        if(A + B == C || B + C == A || A + C == B)
        {
            cout<<"right"<<endl;
        }
        else
        {
            cout<<"wrong"<<endl;
        }
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


