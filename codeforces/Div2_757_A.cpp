#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll i, t, n, l, r, k, check;
    cin>>t;
    while(t--)
    {
        ll count = 0;
        cin>>n>>l>>r>>k;
        int arr[n];
        for(i = 0; i< n; i++)
        {
            cin>>arr[i];
        }
        sort(arr , arr+n);

        for(i = 0; i<n; i++)
        {
            check = (k - arr[i]);
            if(arr[i]>=l && arr[i]<=r && k>=0 && check>=0)
        {
            k = k - arr[i];
            count++;
        }
        }

        cout<<count<<endl;

    }

    return 0;
}
