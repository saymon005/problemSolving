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
#define pi    2*acos(0.0)
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
double fact(double n, double b)
{
    if(n<0) return 0;
    if(n<=1) return 1;
    double e = 2.7182;
    double res = ((n*log10(n/e) + log10(2.0*pi*n)/2.0)
                 )/(log10(b));
    return floor(res) +1;
}

//void solve()
//{
//
//
//}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        //solve();
        ll n;
        cin>>n;
        vi v;
        for(int i = 0; i<n; i++)
        {
            ll x;
            cin>>x;
            v.pb(x);

        }

        if(n==1)
        {
            if(v[0]==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

            continue;

        }

        sort(v.begin(), v.end(), greater<ll>());
        if((v[0]-v[1])<=1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

