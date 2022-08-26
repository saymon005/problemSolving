#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll    long long int
#define lu    unsigned long long int
#define pr    pair<ll, ll>
#define st    set<ll>
#define vi    vector<ll>
#define mp    map<ll, ll>
#define MP    make_pair
#define pi    2*acos(0.0)
#define mod   1000000007
#define MAX   1000006
#define endl  "\n"
#define fr    freopen("input.txt", "r", stdin);
#define fw    freopen("output.txt", "w", stdout);
using namespace std;
using namespace __gnu_pbds;
template<typename T>
using ordered_set = tree <T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

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
    ll n,x,y;
    cin>>n>>x>>y;
    ll arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        int j=0;
        while(y--)
        {
            arr[i] = arr[i]^x;
            j++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

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
