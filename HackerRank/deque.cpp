#include<bits/stdc++.h>
#define ll    long long int
#define lu    unsigned long long int
#define pr    pair<int, int>
#define st    set<int>
#define mst   multiset<int>
#define mp    map<int, int>
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
    ll n,k,b;
    cin>>n>>k;
    ll arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    deque<int> d;
    for(int i = 0; i<n; i++)
    {
        if(d.empty()){
            d.push_back(i);
        }
        if(d.front() <= (i-k)){
            d.pop_front();
        }
        while(!d.empty() && arr[i]>=arr[d.back()]){
            d.pop_back();
        }
        d.push_back(i);
        if(i>= (k-1)){
            cout<<arr[d.front()]<<" ";
        }
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

