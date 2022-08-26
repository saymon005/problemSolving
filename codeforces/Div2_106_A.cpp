#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll k;
    cin>>k;
    ll ar[12];
    for(int i=0;i<12; i++)
    {
        cin>>ar[i];
    }
    if(k==0)
    {
        cout<<0<<endl;
        return 0;
    }
    sort(ar, ar+12);
    ll sum=0, cnt=0;
    for(int i=11; i>=0; i--)
    {
        sum+=ar[i];


    cnt++;
        if(sum>=k)
        {
            cout<<cnt<<endl;
            return 0;
        }
    }

    cout<<-1<<endl;
    return 0;
}
