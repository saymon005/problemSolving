#include<bits/stdc++.h>
#define ll    long long int
#define lu    unsigned long long int
#define st    set<ll>
#define mst   multiset<ll>
#define mp    map<ll, ll>
#define F     first
#define S     second
#define pb    push_back
#define pf    push_front
#define MP    make_pair
#define pi    2*acos(0.0)
#define mod   1000000007
#define MAX   1000006
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

bool isvowel(char c)
{
    return (c=='a' || c== 'e' || c == 'i' || c == 'o' || c =='u');
}
bool cmp(const pair<int,int>&p1, const pair<int,int>&p2)
{
    if(p1.first>p2.first) return 1;
    else if(p1.first==p2.first) return (p1.second<p2.second);
    else return 0;
}

void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<pair<int,int>>v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(), v.end(),cmp);
    ll ans=0;
    for(auto u:v){
       if(u==v[k-1]){
        ans++;
       }
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    //cin>>t;
    //while(t--)
    //{
      solve();
    //}
    return 0;
}

