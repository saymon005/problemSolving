#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n, i, s, s1, j, f;

    cin>>t;
    while(t--)
    {
        ll x,i,j;
        ll flag = 0;
        cin>>x;
        ll arr[x];
        for(int i = 0; i<x; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+x);
        ll red = arr[x-1];
        ll blue = arr[0]+arr[1];

        if(blue<red)
        {
            cout<<"YES"<<endl;
            continue;
        }
        i = 2;
        j = x-2;
        while(i<j)
        {
            red = red + arr[j];
            blue = blue + arr[i];
            if(blue<red)
            {
                flag++;
                break;
            }
            i++;
            j--;
        }

        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}

