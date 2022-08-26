#include<bits/stdc++.h>
#define ll       long long int
#define lu       unsigned long long int
#define pb       push_back
#define pf       push_front
#define mod      1000000007
#define MAX      1000004
#define fast     ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

void solve()
{
    ll n,l,h,i=0,flag=1;
    cin>>n>>l>>h;
    ll N=n;
    double x,sum=0;
    string s[1005];
    while(N--){
        cin>>x;
        s[i]=to_string(x);
        i++;
        sum=sum+x;
    }
    double xx=(double)sum/n;
    i=0;
    while(n--){
        stringstream geek(s[i]);
        double y=0;
        geek>>y;
        double da=abs(y-xx);
        double dl=abs(y-l);
        double dh=abs(y-h);
        double db=min(dl,dh);
        if(da>db){
            std::cout << std::fixed;
            std::cout << std::setprecision(2)<<y<<endl;
            flag=0;
        }
        i++;
    }
    if(flag) cout<<"No outliers"<<endl;
}

int main()
{
    fast;
    ll t,c=1;
    cin>>t;
    while(t--)
        {
            cout<<"Case "<<c<<":"<<endl;
            solve();
            c++;
        }
    return 0;
}
