#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T>
using ordered_set = tree <T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
#define ll long long int

int main()
{
    ll n,i;
    cin>>n;
    ordered_set<ll>s;
    for(i=1;i<=n;i++)
    {
        s.insert(i);
    }
    ll start=0;
    while(s.size()>0)
    {
        start%=s.size();
        ll pos = (start+1)%s.size();
        start=pos;
        auto t = s.find_by_order(pos);
        cout<<*t<<" ";
        s.erase(t);
    }
    return 0;
}
