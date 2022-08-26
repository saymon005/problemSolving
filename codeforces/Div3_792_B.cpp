#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void soln()
{
     ll n, count =0;
        cin>>n;
        if(n==1)
        {
            cout<<1<<endl;
            return;
        }
        int x = (int)sqrt(n) + (int)cbrt(n);
        bool flag = true;
        int a = 1;
        while(flag)
        {
            if(pow(a,6)<n)count++;

            a++;
            if(pow(a,6)>n) flag = false;
        }
        cout<<x-count<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       soln();
    }
    return 0;
}
