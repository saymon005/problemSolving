/*Bismillahir Rahmanir Rahim
  M. Saymon Islam Iftikar
  Department of CSE, AUST
*/
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll    long long int
#define lu    unsigned long long int
#define dl    double
#define pr    pair<ll, ll>
#define st    set<ll>
#define vi    vector<ll>
#define vii   vector<pr>
#define mp    map<ll, ll>
#define heap  priority_queue<ll>
#define rheap priority_queue<ll, vi, greater<ll> >
#define MP    make_pair
#define MT    make_tuple
#define pb    push_back
#define pf    push_front
#define F     first
#define S     second
#define endl  '\n'
#define mem(a,b) memset(a, b, sizeof(a) )
#define asort(a) sort(a.begin(),a.end())
#define rsort(a) sort(a.rbegin(),a.rend())
#define arev(a)  reverse(a.begin(),a.end())
#define gcd(a,b) __gcd(a,b)
#define sqr(a)  ((a) * (a))
#define cube(a) ((a)*(a)*(a))
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
const double pi=2*acos(0.0);
const double PI=acos(-1);
const double eps=1e-9;

#define mod   1000000007
#define MAX   1000006
#define fr    freopen("input.txt", "r", stdin);
#define fw    freopen("output.txt", "w", stdout);
using namespace std;
using namespace __gnu_pbds;
template<typename T>
using ordered_set = tree <T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

bool isPrime(int num)
{
    if(num==1) {return false;}
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
ll LCM(ll a, ll b) {return (a / gcd(a, b) ) * b;}
double fact(double n, double b)
{
  if(n<0) return 0;
  if(n<=1) return 1;
  double e = 2.7182;
  double res = ((n*log10(n/e) + log10(2.0*pi*n)/2.0)
   )/(log10(b));
   return floor(res) +1;
}

bool isLetter(char c) {return (c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z');}
bool isUpperCase(char c) {return c >= 'A' and c <= 'Z';}
bool isLowerCase(char c) {return c >= 'a' and c <= 'z';}
bool isDigit(char c) {return c >= '0' and c <= '9';}
bool isVowel(char c) {return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u';}
bool isConsonant(char c) {return !isVowel(c);}

bool cmp(const pair<int,int>&p1, const pair<int,int>&p2)
{
    if(p1.first>p2.first) return 1;
    else if(p1.first==p2.first) return (p1.second<p2.second);
    else return 0;
}

void solve()
{
    ll n;
    string s;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    cin>>s;
    ll res= INT_MAX;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            res = min(res, v[i]);
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
     //ll cnt=0;
     while(t--)
     {
         //cnt++;
         //cout<<"Case "<<cnt<<": ";
      solve();

     }
    return 0;
}


