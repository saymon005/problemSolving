#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 1, mx = 1;
    cin>>n;
    char arr[100];
    char res = arr[0];
    for(int i = 1; i<=n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);

    for(int i = 1; i<n; i++)
    {
        if(arr[i] == arr[i-1])
        {
            count++;
        }
        else{
            if(count>mx)
            {
                mx = count;
                res = arr[i-1];
            }
            count = 1;
        }
    }
    if(count>mx)
    {
        mx = count;
        res = arr[n-1];
    }
    cout<<res<<endl;

    return 0;
}
