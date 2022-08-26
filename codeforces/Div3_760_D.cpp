#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int arr[n+4];
        int sum = 0;
        for(int i =0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        int j = n-1;
        int i = j-k;
        while(k--)
        {
            sum+=arr[i]/arr[j];
            i--;
            j--;
        }
        for(int f =0; f<=i; f++)sum+=arr[f];
        cout<<sum<<endl;
    }

    return 0;
}
