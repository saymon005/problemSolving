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
    ll n,j,x,y;
    cin>>n;
    vi arr;
    for(int i = 0; i<n; i++)
    {
        cin>>x;
        arr.pb(x);
    }
    sort(arr.begin(),arr.end(),[](int x,int y){
            return x%2<y%2;
         });
    ll res = 0;
    ll len = arr.size();
    for(int i = 0; i<len; i++)
    {
        for(int j = i+1; j<len; j++)
        {
            ll ans = __gcd(arr[i], 2*arr[j]);
            if(ans>1)
            {
                res++;

            }
        }

    }
    cout<<res<<endl;
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

