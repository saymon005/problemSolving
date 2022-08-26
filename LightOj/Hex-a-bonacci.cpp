#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a, b, c, d, e, f;
int main()
{
    ll n, cases;
    cin>>cases;
    for (int caseno = 1; caseno <= cases; ++caseno)
    {
        ll arr[10009];
        cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4]>>arr[5]>>n;
        for(int i = 6; i<=n; i++)
        {
            arr[i] = (arr[i-1] + arr[i-2]+ arr[i-3] + arr[i-4] + arr[i-5] + arr[i-6]) %10000007;
        }
        cout<<"Case "<<caseno<<":"<<" "<<arr[n]%10000007<<"\n";
    }
    return 0;
}

