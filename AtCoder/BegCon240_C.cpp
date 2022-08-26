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
#define f     first
#define sc    second
#define endl  "\n"
#define fr    freopen("input.txt", "r", stdin);
#define fw    freopen("output.txt", "w", stdout);
using namespace std;

bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
void solve()
{
    ll n, x, a, b, sum = 0, flg = 0;
    cin>>n>>x;
    for(int i = 0; i<2*n; i++)
    {
        cin>>a>>b;
        sum +=a;
        if(sum==x)
        {
            flg = 1;
        }
        else
        {
            sum = a;
            sum+=b;
            if(sum == x)
            {
                flg = 1;
            }
            else
            {
                sum = b;
                flg = 0;
            }
        }
    }
    if(flg==1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    
    
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //ll t;
    //cin>>t;
    //while(t--)
    //{
         solve();
    //}
    return 0;
}
