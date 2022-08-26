#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,m,cnt;
    cin>>n>>m>>k;
    int arr[n];
    int brr[m];
    for(int tc=0;tc<n; tc++) cin>>arr[tc];
    for(int tc=0;tc<m;tc++) cin>>brr[tc];
    sort(arr, arr+n);
    sort(brr,brr+m);
    i=0;
    j=0;
    cnt=0;
    while(i<n && j<m)
    {
        if(abs(arr[i] - brr[j])<=k)
        {
            cnt++;
            i++;
            j++;
        }
        else if(arr[i]>brr[j])
        {
            j++;
        }
        else{
            i++;
        }
    }
     cout<<cnt<<endl;
    return 0;
}
