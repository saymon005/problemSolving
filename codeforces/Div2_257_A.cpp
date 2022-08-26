#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,m,Max;
    bool flg=false;
    cin>>n>>m;
    ll arr[1000];
    for(int i=1;i<=n;i++) cin>>arr[i];
    while(1)
    {
        for(int i=1;i<=n;i++)
    {
        if(arr[i]>0) flg=true;
        if(m>=arr[i] && arr[i]>0)
        {
            arr[i] = 0;
            Max=i;
        }
        else{
            arr[i]-=m;
        }
    }
    if(flg==false) break;

    flg=false;

    }
    cout<<Max<<endl;
    return 0;
}
