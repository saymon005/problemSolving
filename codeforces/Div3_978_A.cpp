#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i, count = 0;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        sort(arr,arr+n);
        if(arr[i] == arr[i+1])
        {
            count++;
        }
    }
    //if(count == 2)
    //{

    //}
    cout<<count;
    //cout<<arr[i];


    return 0;
}
