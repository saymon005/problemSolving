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
#define pi    2*acos(0.0)
#define fr    freopen("input.txt", "r", stdin);
#define fw    freopen("output.txt", "w", stdout);
using namespace std;

double fact(double n, double b)
{
    if(n<0) return 0;
    if(n<=1) return 1;
    double e = 2.7182;
    double res = ((n*log10(n/e) + log10(2.0*pi*n)/2.0)
                 )/(log10(b));
    return floor(res) +1;
}
void solve()
{
    ll n,m,k,ans,x,y;

    cin>>n;
    if(n==1)
    {
        cout<<"2"<<endl;
    }
    else if(n==2 || n==3)
    {
        cout<<"1"<<endl;
    }
    else if(n%3==0)
    {
        cout<<n/3<<endl;
    }

    else
    {
        cout<<n/3+1<<endl;
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

