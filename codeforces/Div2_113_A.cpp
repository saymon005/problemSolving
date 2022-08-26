#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n], m =0, mi = 101, mx, mn;
    for(int i = 0; i<n; i++)
    {
         cin>>arr[i];
         if(arr[i]>m)
         {
             m = arr[i];
             mx = i;
         }
         if(arr[i]<=mi)
         {
             mi = arr[i];
             mn = i;
         }

    }

    if(mx>mn)
    {
        mn++;
    }

    cout<<mx + (n-1)- mn<<"\n";
    return 0;
}
