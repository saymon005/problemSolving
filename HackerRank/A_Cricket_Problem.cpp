#include<bits/stdc++.h>
#define ll long long int
#define lu       unsigned long long int
#define mod 1000000007
using namespace std;
int main()
{
    ll n, res;
    cin>>n;
    res = pow(4,n);
    res = res % mod;
    cout<<res<<endl;

    return 0;
}
