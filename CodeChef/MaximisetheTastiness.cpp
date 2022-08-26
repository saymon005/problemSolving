#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll one = max(a,b);
        ll one1 = max(c,d);

        cout<<one+one1<<endl;
    }
    return 0;
}

