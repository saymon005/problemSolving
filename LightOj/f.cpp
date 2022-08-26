#include<bits/stdc++.h>
#define ll    long long int
#define pi    acos(-1)
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        double ans,rectangle, circle, a, b=0, c;
        cin>>a;
        b = a/5;
        c = (a*6)/10;
        rectangle = a*c;
        circle = pi*b*b;
        ans = rectangle - circle;
        cout<<fixed<<setprecision(2);
        cout<<circle<<" "<<ans<<endl;

    }

    return 0;
}





