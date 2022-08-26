#pragma GCC      optimize("Ofast,no-stack-protector")
#pragma GCC      target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
#define ll       long long int
#define lu       unsigned long long int
#define pb       push_back
#define pf       push_front
#define Mod      1000000007
#define MAX      1000004
#define fast     ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {

        ll n,i;
        cin>>n;
        if(n==1)
            cout<<n<<endl;
        if(n>= 2 && n % n-1 !=0)
        {
            for(i = 2; i<=n+1; i++)
            {
                cout<<i<<endl;
            }
        }



    }
    return 0;
}
