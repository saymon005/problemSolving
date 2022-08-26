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
    ll teamMx, teamMx2, teamMin, teamMin2;
    ll arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    teamMx = max(arr[0],arr[1]);
    teamMx2 = max(arr[2], arr[3]);
    sort(arr, arr+4);
    teamMin = max(teamMx,teamMx2);
    teamMin2 = min(teamMx,teamMx2);

    if(arr[2] == teamMin2 && arr[3] == teamMin){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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


