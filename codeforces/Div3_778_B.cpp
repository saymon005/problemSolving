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

//void solve()
//{
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
      ll l,r,a,x,ans,ans2;
    cin>>l>>r>>a;
    if(a==1)
    {
        cout<<r<<endl;
        continue;
    }
    if(r-(r%a)-1>=l)
    {
        x = r- (r%a)-1;
    }
    else{
        x = r;
    }

    ans = (x/a) + (x%a);
    ans2  = (r/a) + (r%a);

    ans = max(ans,ans2);
    cout<<ans<<endl;
    }
    return 0;
}

