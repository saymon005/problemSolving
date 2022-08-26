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
    ll n,j,x;
    cin>>n;
    string s;
    cin>>s;
    ll res = 0;
    for(int i = 0; i<n; i++){

        if(i<n-1 && s[i]== s[i+1] && s[i] =='0')
        {
            res+=2;
            continue;
        }
        else if(i>0 && i<n-1 && s[i] == '1' && s[i-1] =='0' && s[i+1]=='0')
        {
            res+=1;
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

