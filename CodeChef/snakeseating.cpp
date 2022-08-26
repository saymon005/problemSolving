#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i<n; i++) cin>>arr[i];
        sort(arr, arr+n);

        int q,cnt = 0;
        while(q--)
        {
            int k;
            cin>>k;
            if(arr[i]>= k)
            {
                  cnt++;
            }

        }
          cout<<cnt<<endl;
    }
    return 0;
}
