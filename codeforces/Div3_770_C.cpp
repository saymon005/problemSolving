#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n+4];
        for(int i = 0; i<n;i++)cin>>arr[i];
        ll gc1 = 0, gc2 = 0;
        for(int i = 0; i<n; i++)
        {
            if(i%2 == 0)
            {
                gc1 = __gcd(gc1,arr[i]);
            }
            else
            {
                gc2 = __gcd(gc2, arr[i]);
            }
        }
            int a = 0, b = 0;
            for(int i = 1; i<n; i+=2)
            {
                if(arr[i]%gc1 == 0)
                {
                    a = 1;
                    break;
                }
            }

            for(int i = 0; i<n; i+=2)
            {
                if(arr[i]%gc2 == 0)
                {
                    b = 1;
                    break;
                }
            }
            if(a==1 && b==1)cout<<0<<endl;
            else if(a==0)cout<<gc1<<endl;
            else cout<<gc2<<endl;

    }
    return 0;
}
