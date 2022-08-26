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

//ll fact(ll n)
//{
//    if(n==0) return 1;
//    else return n*fact(n-1);
//}

void solve()
{
    ll n,j,fact,fact1;
    cin>>n;
    if(n%2==1)
    {
        cout<<"0"<<endl;
    }
    else
    {
        fact = 1;
        for(int i = 1; i<=n/2; i++)
        {
            fact = (i*fact)%998244353;
        }
        fact1 = 1;
        for(int i = 1; i<=n/2; i++)
        {
            fact1 = (i*fact1)%998244353;
        }



        j = (fact*fact1)%998244353;
            cout<<j<<endl;
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


